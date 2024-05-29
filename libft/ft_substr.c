/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:27:44 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/02/14 19:03:08 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/

/*char	*haha(char *result)
{
	result[0] = '\0';
	return (result);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	reset;
	size_t	i;

	i = 0;
	reset = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	while (s[start + reset] != '\0' && reset < len)
		reset++;
	result = malloc((reset + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < reset && i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}*/