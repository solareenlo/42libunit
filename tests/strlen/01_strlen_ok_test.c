/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strlen_ok_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:02:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:39:57 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_ok_test(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return (0);
	else
		return (-1);
}
