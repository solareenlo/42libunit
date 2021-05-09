/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:49:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 20:52:07 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen/ut_strlen.h"

void	_put_header(void)
{
	ut_putstr_fd("*********************************\n", 1);
	ut_putstr_fd("** 42 - Unit Tests ****\n", 1);
	ut_putstr_fd("*********************************\n", 1);
}

int	main(void)
{
	_put_header();
	strlen_launcher();
	return (0);
}
