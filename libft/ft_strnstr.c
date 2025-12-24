/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:57:23 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:39:26 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	pos;

	if (*to_find == '\0')
		return ((char *)s);
	pos = ft_strlen((char *)to_find);
	while (*s != '\0' && len >= pos)
	{
		if (*s == *to_find && ft_memcmp(s, to_find, pos) == 0)
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}
