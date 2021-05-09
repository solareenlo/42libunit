/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bzero_basic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 04:20:08 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 04:32:36 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_bzero.h"

int	bzero_basic(void)
{
	char	s1[100];
	char	s2[100];

	ft_bzero(s1, sizeof(s1));
	bzero(s2, sizeof(s2));
	if (strcmp(s1, s2) == 0)
		return (0);
	else
		return (-1);
}
