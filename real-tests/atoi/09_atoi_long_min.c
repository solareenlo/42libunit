/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_atoi_long_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 04:00:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 04:00:40 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_atoi.h"

int	atoi_long_min(void)
{
	if (ft_atoi("-9223372036854775808") == atoi("-9223372036854775808"))
		return (0);
	else
		return (-1);
}
