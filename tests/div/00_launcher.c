/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 02:29:55 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 10:01:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_div.h"

int	div_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("DIV:\n");
	ut_lstadd_back(&testlist, "div basic test", &div_basic_test);
	ut_lstadd_back(&testlist, "div zero test	", &div_zero_test);
	return (launch_tests(&testlist));
}
