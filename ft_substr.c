/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <lrieklin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:16:40 by lrieklin          #+#    #+#             */
/*   Updated: 2021/11/09 16:01:04 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static char	*my_func(size_t len, unsigned int start, char const *s, char *new_s)
{
	size_t	i;

	i = 0;
	while (i < len && s != '\0')
	{
		new_s[i] = s[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	len_s;
	size_t	new_len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		new_s = malloc(sizeof(char));
		new_s[0] = '\0';
		return (new_s);
	}
	new_len_s = (len_s - start);
	if (new_len_s < len)
		new_s = (char *)malloc((new_len_s + 1) * sizeof(char));
	else
		new_s = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (new_s)
		return (my_func(len, start, s, new_s));
	return (NULL);
}
