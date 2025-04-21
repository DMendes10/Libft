/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:04:15 by diomende          #+#    #+#             */
/*   Updated: 2025/04/21 21:04:22 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar (char a, int fd)
{
	write (fd, &a, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr_fd (147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		n = n * -1;
		ft_putnbr_fd (n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd (n/10, fd);
		ft_putnbr_fd (n%10, fd);
	}
	else
		ft_putchar (n+48, fd);
}

// int main()
// {
// 	ft_putnbr_fd(-2147483648, 1);
// }