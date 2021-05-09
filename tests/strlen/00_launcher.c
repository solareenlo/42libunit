/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:48:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:40:16 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	ut_putstr_fd("STRLEN:\n", 1);
	ut_lstadd_back(&testlist, "Basic test", &strlen_ok_test);
	return (launch_tests(&testlist));
}
