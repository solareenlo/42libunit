/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 02:29:55 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 02:43:28 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_fpe.h"

int	fpe_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("FPE\n");
	ut_lstadd_back(&testlist, "fpe ok test", &fpe_ok_test);
	ut_lstadd_back(&testlist, "fpe fpe test", &fpe_fpe_test);
	return (launch_tests(&testlist));
}
