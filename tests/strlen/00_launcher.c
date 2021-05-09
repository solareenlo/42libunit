/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:48:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 20:32:15 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	ut_putstr_fd("STRLEN:\n", 1);
	ut_lstadd_back(&testlist, "strlen ok test", &strlen_ok_test);
	ut_lstadd_back(&testlist, "strlen ko test", &strlen_ko_test);
	ut_lstadd_back(&testlist, "strlen segv test", &strlen_sigsegv_test);
	ut_lstadd_back(&testlist, "strlen bus test", &strlen_sigbus_test);
	ut_lstadd_back(&testlist, "strlen timeout test", &strlen_timeout_test);
	return (launch_tests(&testlist));
}
