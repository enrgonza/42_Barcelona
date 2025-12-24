/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgonza <enrgonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:05:52 by enrgonza          #+#    #+#             */
/*   Updated: 2023/02/22 15:26:42 by enrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*save;

	save = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		map = ft_lstnew(f(lst->content));
		if (!map)
		{
			ft_lstclear(&save, del);
			return (NULL);
		}
		ft_lstadd_back(&save, map);
		lst = lst->next;
	}
	map = NULL;
	return (save);
}
