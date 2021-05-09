/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 04:17:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 05:09:58 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_bzero.h"

int	bzero_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("BZERO\n");
	ut_lstadd_back(&testlist, "bzero basic test", &bzero_basic);
	return (launch_tests(&testlist));
}
