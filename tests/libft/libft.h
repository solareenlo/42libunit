/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkamei <mkamei@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:27:41 by tayamamo          #+#    #+#             */
/*   Updated: 2021/05/14 09:49:50 by mkamei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_create_msg(int score);
int		ft_is_prime(int nb);
double	ft_div(int nbr1, int nbr2);

#endif
