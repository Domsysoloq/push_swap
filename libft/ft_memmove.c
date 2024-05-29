/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:41:44 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/28 15:30:40 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	counter;
	char	*psrc;
	char	*pdst;

	if (dst == NULL && src == NULL)
		return (NULL);
	psrc = (char *)src;
	pdst = (char *)dst;
	counter = -1;
	if (pdst < psrc)
	{	
		while (++counter < n)
			pdst[counter] = psrc[counter];
	}
	if (pdst > psrc)
	{	
		while (n > 0)
		{
			pdst[n - 1] = psrc[n - 1];
			n--;
		}
	}
	return (dst);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	ft_memmove(av[1], av[2], atoi(av[3]));
	printf ("%s\n", av[1]);
	return (0);
}*/