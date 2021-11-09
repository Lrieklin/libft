/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:41:39 by lrieklin          #+#    #+#             */
/*   Updated: 2021/10/27 22:20:32 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*new_s;

	i = 0;
	new_s = s;
	while (i < n)
	{
		if (new_s[i] == (char)c)
			return ((void *)&s[i]);
		else
			i++;
	}
	return (NULL);
}	
