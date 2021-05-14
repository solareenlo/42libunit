/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 09:24:46 by mkamei            #+#    #+#             */
/*   Updated: 2021/05/14 09:31:22 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_is_prime.h"

int	is_prime_launcher(void)
{
	t_list_ut	*testlist;

	testlist = NULL;
	printf("IS_PRIME:\n");
	ut_lstadd_back(&testlist, "is_prime basic test", &is_prime_basic_test);
	ut_lstadd_back(&testlist, "is_prime bigger test", &is_prime_bigger_test);
	return (launch_tests(&testlist));
}
