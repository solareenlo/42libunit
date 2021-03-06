/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_int_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:58:38 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 03:58:52 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_atoi.h"

int	atoi_int_min(void)
{
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		return (0);
	else
		return (-1);
}
