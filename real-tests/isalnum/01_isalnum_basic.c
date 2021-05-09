/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_isalnum_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 05:19:13 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 05:20:12 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_isalnum.h"

int	isalnum_basic(void)
{
	if (ft_isalnum('a') == isalnum('a'))
		return (0);
	else
		return (-1);
}
