/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 19:36:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 19:42:00 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ut_putstr_err(char *s)
{
	ut_putstr_fd("Error: ", 2);
	ut_putstr_fd(s, 2);
	ut_putstr_fd("\n", 2);
	return (1);
}

void	ut_putstr_status(char *name, char *res)
{
	ut_putstr_fd("\t> ", 1);
	ut_putstr_fd(name, 1);
	ut_putstr_fd("\t: [", 1);
	if (ut_strncmp(res, "OK", 3) == 0)
		ut_putstr_fd(GREEN, 1);
	else
		ut_putstr_fd(RED, 1);
	ut_putstr_fd(res, 1);
	ut_putstr_fd(RESET, 1);
	ut_putstr_fd("]\n", 1);
}

void	ut_put_header(void)
{
	printf("*********************************\n");
	printf("***      42 - Unit Tests      ***\n");
	printf("*********************************\n");
}
