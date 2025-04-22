/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:43:28 by diomende          #+#    #+#             */
/*   Updated: 2025/04/22 20:16:26 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (!lst)
		return (NULL);
	while (last->next != NULL)
		last = last->next;
	return (last);
}

// int main()
// {
// 	t_list t1;
// 	t_list t2;
// 	t_list t3;
// 	t_list t4;
// 	t_list t5;
// 	t1.next = &t2;
// 	t2.next = &t3;
// 	t3.next = &t4;
// 	t4.next = &t5;
// 	t5.next = NULL;
// 	printf("%p\n%p\n", &t5, ft_lstlast(&t5));
// }