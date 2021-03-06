/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:14:17 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 19:15:02 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_memset.h"

int	memset_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("MEMSET\n");
	ut_lstadd_back(&testlist, "memset basic test", &memset_basic);
	return (launch_tests(&testlist));
}
