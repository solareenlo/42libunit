/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 20:20:18 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	_timeout(int sig)
{
	(void)sig;
	exit(SIGALRM);
}

void	_run_child(t_list_ut *test)
{
	if (test == NULL)
		exit(ut_putstr_err("There is no test!"));
	signal(SIGALRM, _timeout);
	alarm(TIMEOUT);
	if (test->func() == 0)
		exit(0);
	else
		exit(-1);
}

void	_put_result(char *name, int status)
{
	if (name == NULL)
		exit(ut_putstr_err("Test name is NULL."));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			ut_putstr_status(name, "OK");
		else if (WEXITSTATUS(status) == SIGALRM)
			ut_putstr_status(name, "TIMEOUT");
		else
			ut_putstr_status(name, "KO");
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ut_putstr_status(name, "SIGSEGV");
		else if (WTERMSIG(status) == SIGBUS)
			ut_putstr_status(name, "SIGBUS");
	}
}

void	_run_parent(t_list_ut *test, int *passed)
{
	int	status;

	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		(*passed)++;
	_put_result(test->name, status);
}

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
			_run_child(*testlist);
		else
			_run_parent(*testlist, &passed);
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
