/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:18:30 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/19 15:17:45 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (dstsize == 0)
		return (i + ft_strlen((char *)src));
	while (i < dstsize && dst[i] != '\0')
		i++;
	while (i + i2 < dstsize - 1 && src[i2] != '\0')
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	if (i + i2 < dstsize)
		dst[i + i2] = '\0';
	return (i + ft_strlen((char *)src));
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%zu\n", ft_strlcat(av[1], av[2], atoi(av[3])));
	printf ("%s\n", av[1]);
	return (0);
}*/