/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:25:25 by lrieklin          #+#    #+#             */
/*   Updated: 2021/10/27 22:27:34 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	length;
	size_t	i;

	if (!s1)
		return (NULL);
	i = 0;
	new_str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	length = ft_strlen(s1);
	if (new_str)
	{
		while (i < length)
		{
			new_str[i] = s1[i];
			i++;
		}
		new_str[i] = '\0';
		return (new_str);
		free(new_str);
	}
	else
		return (NULL);
}
