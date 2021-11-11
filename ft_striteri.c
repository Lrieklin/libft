/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:06:53 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/12 00:01:29 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s || !f)
		return ;
	len_s = ft_strlen(s);
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
