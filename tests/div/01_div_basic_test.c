/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_div_basic_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 02:32:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 09:42:34 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_div.h"

int	div_basic_test(void)
{
	if (ft_div(10, 5) == 10 / 5)
		return (0);
	else
		return (-1);
}
