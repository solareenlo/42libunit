/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 21:13:41 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	_run_tests(t_list_ut **testlist)
{
	int			total;
	int			passed;
	pid_t		pid;
	t_list_ut	*head;

	total = 0;
	passed = 0;
	head = *testlist;
	while (*testlist)
	{
		pid = fork();
		if (pid == -1)
			exit(ut_putstr_err("fork failed"));
		else if (pid == 0)
			ut_run_child(*testlist);
		else
			ut_run_parent(*testlist, &passed);
		total++;
		*testlist = (*testlist)->next;
	}
	*testlist = head;
	if (total == passed)
		return (0);
	else
		return (-1);
}

int	launch_tests(t_list_ut **testlist)
{
	int	res;

	res = _run_tests(testlist);
	ut_lstclear(testlist);
	return (res);
}
