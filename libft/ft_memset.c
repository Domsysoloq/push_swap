/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:09:12 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/19 17:26:31 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = b;
	while (len > 0)
	{
		p[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}

/*int	main(int ac, char**av)
{
	char	string[16] = "phosphophyllite";
	
	(void)ac;
	ft_memset(string, atoi(av[1]), atoi(av[2]));
	printf ("%s\n", string);
	return (0);
}*/