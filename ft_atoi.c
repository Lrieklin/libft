/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:42:27 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/09 17:15:44 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	my_func(unsigned long res, int minus)
{
	if (res >= 9223372036854775807L && !minus)
		return ((int)9223372036854775807L);
	if (res >= (unsigned long)9223372036854775807 + (unsigned long)1L && minus)
		return ((int)(-9223372036854775807L - 1L));
	if (minus)
		return ((int)((long) res * -1));
	return ((int)res);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	res;
	int				minus;

	i = 0;
	res = 0;
	minus = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		minus = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' )
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (my_func(res, minus));
}
