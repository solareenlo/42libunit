/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_basic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:41:18 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 03:50:20 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_atoi.h"

int	atoi_basic(void)
{
	if (ft_atoi("123") == atoi("123"))
		return (0);
	else
		return (-1);
}
