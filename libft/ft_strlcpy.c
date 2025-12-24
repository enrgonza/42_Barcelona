/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:12:01 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:38:07 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{	
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (len);
}
