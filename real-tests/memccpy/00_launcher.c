/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:58:07 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 19:59:11 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_memccpy.h"

int	memccpy_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("MEMCCPY\n");
	ut_lstadd_back(&testlist, "memccpy basic test", &memccpy_basic);
	return (launch_tests(&testlist));
}
