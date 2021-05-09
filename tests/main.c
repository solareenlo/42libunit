/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:49:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 02:50:36 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen/ut_strlen.h"
#include "fpe/ut_fpe.h"

static void	_put_header(void)
{
	printf("*********************************\n");
	printf("***      42 - Unit Tests      ***\n");
	printf("*********************************\n");
}

int	main(void)
{
	_put_header();
	strlen_launcher();
	fpe_launcher();
	return (0);
}
