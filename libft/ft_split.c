/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:57:33 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/23 10:49:09 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	w;
	int	i;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			w++;
		}
	}		
	return (w);
}

static int	ft_len_words(char const *s, char c)
{
	int	i;
	int	len_w;

	i = 0;
	len_w = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len_w++;
	}
	return (len_w);
}

static char	*ft_copy_malloc(char const *s, int init, int len)
{
	char	*str;
	int		end_word;
	int		i;

	i = 0;
	end_word = init + len;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (init < end_word)
	{
		str[i] = s[init];
		i++;
		init++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_error(char **spl, int i)
{
	while (i >= 0)
	{
		free(spl[i]);
		i--;
	}
	free(spl);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	int		w;
	int		i;
	int		j;

	i = 0;
	j = 0;
	w = ft_count_words(s, c);
	spl = (char **)malloc(sizeof(char *) * (w + 1));
	if (!spl || !s)
		return (NULL);
	while (i < w)
	{
		while (s[j] == c)
			j++;
		spl[i] = ft_copy_malloc(s, j, ft_len_words(&s[j], c));
		if (!spl[i])
			return (ft_error(spl, i));
		j = j + ft_len_words(&s[j], c);
		i++;
	}
	spl[i] = NULL;
	return (spl);
}
