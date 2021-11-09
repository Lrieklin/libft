/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:56:37 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/09 18:48:41 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	if (s2[i] == 0)
		return (1);
	if (s1[i] == 0)
		return (-1);
	while (i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
			break ;
		}
		if (s1[i] < s2[i])
		{
			return (-1);
			break ;
		}
		else
			i++;
	}
	return (0);
}
