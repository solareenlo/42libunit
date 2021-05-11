/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_fork.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 21:12:10 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/11 12:09:17 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	_timeout(int sig)
{
	(void)sig;
	exit(SIGALRM);
}

void	ut_run_child(t_list_ut *test)
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
			ut_putstr_status(name, "SEGV");
		else if (WTERMSIG(status) == SIGBUS)
			ut_putstr_status(name, "BUSE");
		else if (WTERMSIG(status) == SIGFPE)
			ut_putstr_status(name, "FPE");
	}
}

void	ut_run_parent(t_list_ut *test, int *ok)
{
	int	status;

	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		(*ok)++;
	_put_result(test->name, status);
}
