/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_calloc_basic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 05:06:11 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 05:08:20 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_calloc.h"

int	calloc_basic(void)
{
	char	*s1;
	char	*s2;

	s1 = ft_calloc(100, sizeof(char));
	s2 = calloc(100, sizeof(char));
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
