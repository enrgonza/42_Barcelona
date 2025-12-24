/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:14:28 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:36:33 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = ((char *)s1)[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
