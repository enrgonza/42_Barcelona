/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:10:02 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:37:03 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;	

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
