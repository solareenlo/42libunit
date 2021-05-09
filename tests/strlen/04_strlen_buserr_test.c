/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strlen_buserr_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:46:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:56:03 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_sigbus_test(void)
{
	char	*s = "42tokyo";

	s[0] = '4';
	if (ft_strlen(s) == strlen("42tokyo"))
		return (0);
	else
		return (-1);
}