/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:23:21 by lrieklin          #+#    #+#             */
/*   Updated: 2021/10/27 22:24:06 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*new_s1;
	const unsigned char	*new_s2;
	size_t				i;

	i = 0;
	new_s1 = s1;
	new_s2 = s2;
	while (i < n)
	{
		if (new_s1[i] != new_s2[i])
			return ((int)(new_s1[i] - new_s2[i]));
		else
			i++;
	}
	return (0);
}
