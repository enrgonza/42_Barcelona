/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:54:38 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:40:24 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strchr_t(char *s, char c)
{
	while (*s != c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*setc;

	i = 0;
	setc = (char *)set;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr_t(setc, *s1))
		s1++;
	while (s1[i])
		i++;
	while (i && ft_strchr_t(setc, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
