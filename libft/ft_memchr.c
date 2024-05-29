/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:17:35 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/28 17:14:48 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p = (const unsigned char*)s;

	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			while (i != 0)
			{
				p++;
				i--;
			}
			return ((void *)p);
		}
		i++;
	}
	return (NULL);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%s\n", ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}*/
