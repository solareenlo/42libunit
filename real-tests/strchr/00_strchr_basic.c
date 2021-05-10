/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strchr_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:28:50 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 11:30:27 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strchr.h"

int	strchr_basic(void)
{
	const char	*s = "42tokyo";

	if (ft_strchr(s, 'o') == strchr(s, 'o'))
		return (0);
	else
		return (-1);
}
