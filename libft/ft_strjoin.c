/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:05:37 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:37:21 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (((char *)s1)[i])
	{
		join[i] = ((char *)s1)[i];
		i++;
	}
	while (((char *)s2)[j])
	{
		join[i] = ((char *)s2)[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
