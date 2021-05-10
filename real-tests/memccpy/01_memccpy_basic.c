/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memccpy_basic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 20:00:06 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 20:22:24 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_memccpy.h"

int	memccpy_basic(void)
{
	char	*s;
	char	*s1;
	char	*s2;

	s = STR;
	s1 = calloc(strlen(STR), sizeof(char));
	s2 = calloc(strlen(STR), sizeof(char));
	ft_memccpy(s1, s, 0, 3);
	memccpy(s2, s, 0, 3);
	if (strcmp(s1, s2) == 0)
	{
		free(s1);
		free(s2);
		return (0);
	}
	else
	{
		free(s1);
		free(s2);
		return (-1);
	}
}
