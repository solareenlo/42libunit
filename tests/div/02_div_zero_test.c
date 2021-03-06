/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_div_zero_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 02:41:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 09:56:12 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_div.h"

int	div_zero_test(void)
{
	if (ft_div(10, 0) == 2147483647)
		return (0);
	else
		return (-1);
}
