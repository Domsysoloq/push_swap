/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:53:19 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/03 17:08:11 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*result;
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	result = malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
	{
		result[i] = s2[i2];
		i++;
		i2++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%s\n", ft_strjoin(av[1], av[2]));
	return (0);
}*/