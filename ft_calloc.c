/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrieklin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:49:33 by lrieklin          #+#    #+#             */
/*   Updated: 2021/10/27 21:56:52 by lrieklin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new_elem;
	size_t	i;

	i = 0;
	new_elem = (char *)malloc(count * size);
	if (new_elem)
	{
		while (i < count * size)
		{
			new_elem[i] = '\0';
			i++;
		}
		return (new_elem);
	}
	return (NULL);
}
