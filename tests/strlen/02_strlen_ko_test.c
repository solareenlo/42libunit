/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_ko_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 16:43:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:50:45 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_strlen.h"

int	strlen_ko_test(void)
{
	if (ft_strlen("42tokyo ") == strlen("42tokyo"))
		return (0);
	else
		return (-1);
}
