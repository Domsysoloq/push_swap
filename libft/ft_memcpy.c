/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:41:44 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/19 19:12:41 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;
	char	*psrc;
	char	*pdst;

	if (src == NULL && dst == NULL)
		return (NULL);
	psrc = (char *)src;
	pdst = (char *)dst;
	counter = 0;
	while (counter < n)
	{
		pdst[counter] = psrc[counter];
		counter++;
	}
	return (dst);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	ft_memcpy(av[1], av[2], atoi(av[3]));
	printf ("%s\n", av[1]);
	return (0);
}*/