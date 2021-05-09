/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:48:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 11:07:41 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_ut.h"

int	strlen_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	ut_putstr_fd("STRLEN:\n", 1);
	ut_lstadd_back(&testlist, "Basic test", &basic_test);
	return (0);
}
