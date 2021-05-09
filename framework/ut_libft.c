/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_libft1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:21:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 20:33:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

size_t	ut_strlen(char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ut_putchar_fd(char c, int fd)
{
	if (!c || fd < 0)
		return ;
	write(fd, &c, 1);
}

void	ut_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ut_strlen(s));
}

void	ut_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ut_putstr_fd(s, fd);
	ut_putchar_fd('\n', fd);
}

int	ut_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n--)
	{
		u1 = (unsigned char)*(s1++);
		u2 = (unsigned char)*(s2++);
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
	}
	return (0);
}
