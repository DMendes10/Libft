/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:23:03 by diomende          #+#    #+#             */
/*   Updated: 2025/04/22 20:15:59 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main (void)
// {
// 	t_list *t1 = ft_lstnew("primeiro");
// 	t_list *t2 = ft_lstnew("segundo");
// 	ft_lstadd_front(&t1, t2);
// 	printf("%d\n", ft_lstsize(t2));
// 	free(t1->next);
// 	free(t1);
// 	return (0);
// }