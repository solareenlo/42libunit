/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_libft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:21:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 10:44:38 by tayamamo         ###   ########.fr       */
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

void	ut_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	write(fd, s, ut_strlen(s));
}

int	ut_putstr_err(char *s)
{
	ut_putstr_fd("Error: ", 2);
	ut_putstr_fd(s, 2);
	ut_putstr_fd("\n", 2);
	return (1);
}
