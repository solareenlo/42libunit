/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:37:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 13:28:19 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_atoi.h"

int	atoi_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("ATOI\n");
	ut_lstadd_back(&testlist, "atoi basic test", &atoi_basic);
	ut_lstadd_back(&testlist, "atoi space test", &atoi_space);
	ut_lstadd_back(&testlist, "atoi spaces test", &atoi_spaces);
	ut_lstadd_back(&testlist, "atoi sign test", &atoi_sign);
	ut_lstadd_back(&testlist, "atoi signs test", &atoi_signs);
	ut_lstadd_back(&testlist, "atoi INT MAX test", &atoi_int_max);
	ut_lstadd_back(&testlist, "atoi INT MIN test", &atoi_int_min);
	ut_lstadd_back(&testlist, "atoi LONG MAX test", &atoi_long_max);
	ut_lstadd_back(&testlist, "atoi LONG MIN test", &atoi_long_min);
	ut_lstadd_back(&testlist, "atoi zero zero test", &atoi_zero_zero);
	ut_lstadd_back(&testlist, "atoi null term test", &atoi_null_term);
	ut_lstadd_back(&testlist, "atoi null test", &atoi_null);
	return (launch_tests(&testlist));
}
