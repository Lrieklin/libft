/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:23:09 by lrieklin          #+#    #+#             */
/*   Updated: 2021/10/11 22:27:52 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = (int)my_strlen(s);
	if (c == '\0')
		return ((char *)(s + n));
	n--;
	while (n >= 0)
	{
		if (s[n] == (char) c)
			return ((char *)(s + n));
		n--;
	}
	return (NULL);
}
