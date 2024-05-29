/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:30:55 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/17 19:51:09 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	int		result;

	result = ft_strlen((char *)src);
	counter = 0;
	if (dstsize == 0)
		return ((size_t)result);
	while ((dstsize - 1) > 0)
	{
		if (src[counter] == '\0')
			break ;
		dst[counter] = src[counter];
		counter++;
		dstsize--;
	}
	if (src[counter] == '\0' || (dstsize - 1) == 0)
		dst[counter] = '\0';
	return ((size_t)result);
}

/*int main(int ac, char**av)
{
    char dst[atoi(av[2])];
    (void)ac;
    printf ("%zu\n", ft_strlcpy(dst, av[1], atoi(av[2])));
    printf ("%s\n", dst);
    return (0);
}*/