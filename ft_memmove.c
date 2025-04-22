/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:53:39 by diomende          #+#    #+#             */
/*   Updated: 2025/04/22 14:02:37 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *)dest);
}

// int main (void)
// {
	// char s[] = "";
	// char d[] = "";
	// char s1[] = "";
	// char d2[] = "";

	// size_t size= 3;
	// ft_memmove(NULL, "ola", size);
	// printf("%s\n", s);
	// printf("%s\n", d);
	// memmove(NULL, "ola", size);
	// printf("%s\n", s1);
	// printf("%s\n", d2);
// }
