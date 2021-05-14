/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:48:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 10:04:38 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	ut_putstr_fd("STRLEN:\n", 1);
	ut_lstadd_back(&testlist, "strlen basic test", &strlen_basic_test);
	ut_lstadd_back(&testlist, "strlen ko test", &strlen_ko_test);
	ut_lstadd_back(&testlist, "strlen NULL test", &strlen_null_test);
	return (launch_tests(&testlist));
}
