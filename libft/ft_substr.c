/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:58:50 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:40:47 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*out;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (len > (s_len - start))
		len = s_len - start;
	if (start >= s_len)
	{
		out = (char *)malloc(1);
		if (out == NULL)
			return (NULL);
		out[0] = '\0';
		return (out);
	}
	out = (char *)malloc(len + 1);
	if (out == NULL)
		return (NULL);
	out = ft_memcpy(out, s + start, len);
	out[len] = '\0';
	return (out);
}
