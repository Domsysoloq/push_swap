/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:04:17 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/06 18:39:21 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	morethan25lines(int n)
{
	unsigned int	jsp;

	jsp = 1;
	while (n >= 10)
	{
		n /= 10;
		jsp *= 10;
	}
	return (jsp);
}

void	tropfunlesintminhahaha(int fd)
{
	char	c;

	c = '-';
	write (fd, &c, 1);
	c = '2';
	write (fd, &c, 1);
	c = '1';
	write (fd, &c, 1);
	c = '4';
	write (fd, &c, 1);
	c = '7';
	write (fd, &c, 1);
	c = '4';
	write (fd, &c, 1);
	c = '8';
	write (fd, &c, 1);
	c = '3';
	write (fd, &c, 1);
	c = '6';
	write (fd, &c, 1);
	c = '4';
	write (fd, &c, 1);
	c = '8';
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	jsp;

	if (n == -2147483648)
		tropfunlesintminhahaha(fd);
	else
	{
		if (n < 0)
		{
			c = '-';
			write (fd, &c, 1);
			n *= -1;
		}
		jsp = morethan25lines(n);
		while (jsp > 1)
		{
			c = (n / jsp) + '0';
			write (fd, &c, 1);
			n -= (n / jsp) * jsp;
			jsp /= 10;
		}
		c = n + '0';
		write (fd, &c, 1);
	}
}
