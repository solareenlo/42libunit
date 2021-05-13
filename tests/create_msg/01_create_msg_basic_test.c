/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_create_msg_basic_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 12:30:34 by mkamei            #+#    #+#             */
/*   Updated: 2021/05/13 12:36:53 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ut_create_msg.h"

int	create_msg_basic_test(void)
{
	if (strcmp(ft_create_msg(3), "score :3/5") == 0)
		return (0);
	else
		return (-1);
}
