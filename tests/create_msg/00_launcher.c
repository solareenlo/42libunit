/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:28:45 by mkamei            #+#    #+#             */
/*   Updated: 2021/05/13 12:30:19 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_create_msg.h"

int	create_msg_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("CREATE_MSG:\n");
	ut_lstadd_back(&testlist, "create_msg basic test", &create_msg_basic_test);
	return (launch_tests(&testlist));
}
