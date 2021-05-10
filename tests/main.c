/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:49:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/10 19:42:39 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen/ut_strlen.h"
#include "fpe/ut_fpe.h"

int	main(void)
{
	ut_put_header();
	strlen_launcher();
	fpe_launcher();
	return (0);
}
