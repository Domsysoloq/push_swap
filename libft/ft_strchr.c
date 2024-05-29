/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:45:41 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/19 18:15:20 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while ((char)c != *p && *p != '\0')
		p++;
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
	printf ("%s\n", ft_strchr(av[1], atoi(av[2])));
	return (0);
}*/
