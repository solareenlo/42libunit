/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 05:04:23 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 05:11:22 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_calloc.h"

int	calloc_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("CALLOC\n");
	ut_lstadd_back(&testlist, "calloc basic test", &calloc_basic);
	return (launch_tests(&testlist));
}
