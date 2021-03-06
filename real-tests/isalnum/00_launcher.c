/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 05:16:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 11:21:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_isalnum.h"

int	isalnum_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("ISALNUM\n");
	ut_lstadd_back(&testlist, "isalnum basic test", &isalnum_basic);
	ut_lstadd_back(&testlist, "isalnum mod 256 test", &isalnum_mod_256);
	return (launch_tests(&testlist));
}
