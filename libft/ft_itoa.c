/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:16:09 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:29:36 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(long n)
{
	size_t	size;

	if (n < 0)
		size = 1;
	else
		size = 0;
	while (1)
	{
		n = n / 10;
		size++;
		if (n == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	size_t	i;
	long	num;
	size_t	size;

	i = 0;
	num = n;
	size = ft_size(num);
	itoa = (char *)malloc(size + 1);
	if (!itoa)
		return (NULL);
	itoa[size] = '\0';
	if (num < 0)
	{
		itoa[0] = '-';
		num = num * -1;
		i++;
	}
	while (i < size)
	{
		itoa[size - 1] = (num % 10) + 48;
		num = num / 10;
		size--;
	}
	return (itoa);
}
