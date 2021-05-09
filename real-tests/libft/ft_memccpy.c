/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 03:54:02 by tayamamo          #+#    #+#             */
/*   Updated: 2020/06/28 14:59:21 by tayamamo         ###   ########.fr       */
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
			if ((*(d++) = *(s++)) == c)
				return (d);
	}
	return (NULL);
}
