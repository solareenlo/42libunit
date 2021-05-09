/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 22:15:20 by tayamamo          #+#    #+#             */
/*   Updated: 2020/06/30 01:19:27 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t n)
{
	unsigned char	*p;
	unsigned char	c;

	p = dst;
	c = val;
	while (n--)
		*(p++) = c;
	return (dst);
}
