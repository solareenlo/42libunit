/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:49:00 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/13 11:45:03 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen/ut_strlen.h"
#include "fpe/ut_fpe.h"

int	main(void)
{
	int	status;

	ut_put_header();
	status = 0;
	if (strlen_launcher() == -1)
		status = 1;
	if (fpe_launcher() == -1)
		status = 1;
	return (status);
}
