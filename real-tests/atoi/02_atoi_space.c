/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 03:48:52 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 03:51:11 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_atoi.h"

int	atoi_space(void)
{
	if (ft_atoi(" ") == atoi(" "))
		return (0);
	else
		return (-1);
}
