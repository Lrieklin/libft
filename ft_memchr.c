/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:41:39 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/11 17:17:34 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*new_s;

	i = 0;
	new_s = (const char *)s;
	while (i < n)
	{
		if (new_s[i] == (char)c)
			return ((void *)&s[i]);
		else
			i++;
	}
	return (NULL);
}	
