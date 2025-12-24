/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:10:17 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:34:05 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src || !n)
		return (dst);
	if (dst < src)
	{
		while (i < n)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dst + (n - 1)) = *((char *)src + (n - 1));
			n--;
		}
	}
	return (dst);
}
