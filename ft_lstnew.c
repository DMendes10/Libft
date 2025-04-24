/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:38:38 by diomende          #+#    #+#             */
/*   Updated: 2025/04/24 16:07:09 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*root;

	root = malloc(sizeof(t_list));
	if (!root)
		return (NULL);
	root->content = content;
	root->next = NULL;
	return (root);
}

// int main()
// {
// 	char	*i;
// 	t_list	*node;
// 	i = "a";
// 	node = ft_lstnew(i);
// 	printf("%s\n", node->content);
// 	printf("%s\n", node->next);
// 	free(node);
// }