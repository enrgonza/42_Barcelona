/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:59:17 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:38:33 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = ((char *)s)[i];
		i++;
	}
	str[i] = '\0';
	i = 0;
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
