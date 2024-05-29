/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:26:14 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/28 17:09:59 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = s;
	while (n > 0)
	{
		p[i] = 0;
		n--;
		i++;
	}
}

/*int	main(int ac, char **av)
{
	(void)ac;
	ft_bzero(av[1], atoi(av[2]));
	printf ("%s\n", av[1]);
	return (0);
}*/