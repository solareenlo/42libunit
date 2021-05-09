/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/28 01:37:23 by tayamamo          #+#    #+#             */
/*   Updated: 2020/09/04 16:46:09 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_free(char **s, size_t size)
{
	while (size--)
		free(*s++);
	free(s);
	return ;
}

static	size_t	str_len(char const *s, char c)
{
	size_t	len;

	while (*s == c)
		s++;
	len = 0;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

static	size_t	cnt_word(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			cnt++;
		while (*s != c && *s)
			s++;
	}
	return (cnt);
}

void			str_cpy(char *dst, const char **src, const char c)
{
	char	*d;

	d = dst;
	while (**src == c)
		(*src)++;
	while (**src != c && **src)
		*(d++) = *((*src)++);
	*d = '\0';
}

char			**ft_split(char const *s, char c)
{
	char		**res;
	char		**top;
	size_t		cnt;
	size_t		i;

	if (!s || !(res = (char **)malloc(sizeof(char *) * (cnt_word(s, c) + 1))))
		return (NULL);
	cnt = cnt_word(s, c);
	top = res;
	i = -1;
	while (++i < cnt)
	{
		if (!((*res) = (char *)malloc(sizeof(char) * (str_len(s, c) + 1))))
		{
			ft_free(res, i);
			return (NULL);
		}
		str_cpy(*res, &s, c);
		res++;
	}
	*res = NULL;
	return (top);
}
