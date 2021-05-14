/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 10:12:49 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static int	_put_result(int total, int ok)
{
	if (total == ok)
	{
		printf("\t%s%d/%d tests checked%s\n", GREEN, ok, total, RESET);
		return (0);
	}
	else
	{
		printf("\t%s%d/%d tests checked%s\n", RED, ok, total, RESET);
		return (-1);
	}
}

int	_run_tests(t_list_ut **testlist)
{
	int			total;
	int			ok;
	pid_t		pid;
	t_list_ut	*head;

	total = 0;
	ok = 0;
	head = *testlist;
	while (*testlist)
	{
		pid = fork();
		if (pid == -1)
		{
			ut_lstclear(&head);
			exit(ut_putstr_err("fork failed"));
		}
		else if (pid == 0)
			ut_run_child(*testlist);
		else
			ut_run_parent(*testlist, &ok);
		total++;
		*testlist = (*testlist)->next;
	}
	*testlist = head;
	return (_put_result(total, ok));
}

int	launch_tests(t_list_ut **testlist)
{
	int	res;

	res = _run_tests(testlist);
	ut_lstclear(testlist);
	return (res);
}
