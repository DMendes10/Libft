/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:56:30 by diomende          #+#    #+#             */
/*   Updated: 2025/04/21 20:56:31 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*s1;

	i = strlen(s);
	s1 = (char *)s;
	if (s1[i] == '\0' && (char)c == '\0')
		return (&s1[i]);
	while (i > 0)
	{
		if (s1[i - 1] == (char)c)
			return (&s1[i - 1]);
		i--;
	}
	return (NULL);
}

// int main ()
// {
// 	printf("%s\n", ft_strrchr("banana", 'n'));
// }