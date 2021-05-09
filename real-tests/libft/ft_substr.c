/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 08:33:45 by tayamamo          #+#    #+#             */
/*   Updated: 2020/07/03 03:54:30 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	char	*res;

	if (!s)
		return (NULL);
	if (len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res = copy;
	while (start--)
		s++;
	while (len-- && *s != '\0')
		*copy++ = *s++;
	*copy = '\0';
	return (res);
}
