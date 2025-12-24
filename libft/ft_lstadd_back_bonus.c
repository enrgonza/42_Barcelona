/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:35:14 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:30:44 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add_b;

	add_b = *lst;
	if (!add_b)
		*lst = new;
	else
	{
		while (add_b->next != NULL)
			add_b = add_b->next;
		add_b->next = new;
	}
}
