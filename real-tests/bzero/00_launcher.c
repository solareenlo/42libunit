/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 04:17:59 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 04:30:25 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_bzero.h"

int	bzero_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("BZERO\n");
	ut_lstadd_back(&testlist, "atoi basic test", &bzero_basic);
	return (launch_tests(&testlist));
}
