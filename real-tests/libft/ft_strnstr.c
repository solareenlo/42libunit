/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 14:05:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 11:55:38 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	flen;

	if (*find == '\0')
		return ((char *)s);
	flen = ft_strlen(find);
	if (len < 1 || *s == '\0' || len < flen)
		return (NULL);
	while (ft_strncmp(s, find, flen) != 0)
	{
		s++;
		len--;
		if (len < 1 || *s == '\0' || len < flen)
			return (NULL);
	}
	return ((char *)s);
}
