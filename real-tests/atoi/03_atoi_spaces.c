/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:53:19 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 04:13:10 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_atoi.h"

int	atoi_spaces(void)
{
	if (ft_atoi(" \t\n\r\v\f  42 \n ") == atoi(" \t\n\r\v\f  42 \n "))
		return (0);
	else
		return (-1);
}