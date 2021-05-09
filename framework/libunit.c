/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 10:14:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/09 16:36:47 by tayamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	run_tests(t_list_ut **testlist)
{
	return (0);
}

int	launch_tests(t_list_ut **testlist)
{
	int	res;

	res = run_tests(testlist);
	return (res);
}
