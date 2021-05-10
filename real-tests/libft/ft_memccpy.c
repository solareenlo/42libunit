/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 03:54:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 11:53:59 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int val, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		c;

	if (n)
	{
		d = dst;
		s = src;
		c = val;
		while (n--)
		{
			*(d++) = *(s++);
			if (*(d - 1) == c)
				return (d);
		}
	}
	return (NULL);
}
