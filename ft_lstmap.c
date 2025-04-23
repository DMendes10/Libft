/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:36:52 by diomende          #+#    #+#             */
/*   Updated: 2025/04/23 12:42:00 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*lst2;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		lst2 = ft_lstnew(f(lst->content));
		if (!lst2)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, lst2);
		lst = lst->next;
	}
	return (new);
}

//