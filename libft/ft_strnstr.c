/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:19:28 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/03 21:23:34 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		in;

	in = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i + in] != '\0' && i < len)
	{
		while (needle[in] != haystack[i] && haystack[i] != '\0'
			&& i < len)
			i++;
		if (needle[in] != haystack[i])
			break ;
		while (needle[in] == haystack[i + in] && haystack[i + in] != '\0'
			&& i + in < len)
			in++;
		if (needle[in] == '\0')
			return ((char *)&haystack[i]);
		i++;
		in = 0;
	}
	return (NULL);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}*/