/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:26:33 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 11:27:51 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strchr.h"

int	strchr_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("STRCHR\n");
	ut_lstadd_back(&testlist, "strchr basic test", &strchr_basic);
	return (launch_tests(&testlist));
}
