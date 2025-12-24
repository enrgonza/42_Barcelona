/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:00:13 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:39:10 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	r;

	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
		{
			r = ((unsigned char)*s1 - (unsigned char)*s2);
			if (r > 0)
				return (1);
			if (r < 0)
				return (-1);
		}
		n--;
		s1++;
		s2++;
	}
	return (0);
}
