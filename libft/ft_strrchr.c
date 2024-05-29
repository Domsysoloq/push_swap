/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:49:35 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/19 18:32:48 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	counter;

	counter = 0;
	p = (char *)s;
	while (*p != '\0')
	{
		p++;
		counter++;
	}
	while (*p != (char)c && counter != 0)
	{
		p--;
		counter--;
	}
	if (*p == '\0' && (char)c == *p)
		return (p);
	else if (*p != (char)c)
		return (NULL);
	else
		return (p);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%s\n", ft_strrchr(av[1], atoi(av[2])));
	return (0);
}*/
