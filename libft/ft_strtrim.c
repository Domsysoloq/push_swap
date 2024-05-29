/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:19:53 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/03 18:42:59 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	isbannedchar(char c, char const *bannedchar)
{
	size_t	i;
	int		error;

	error = 0;
	i = 0;
	while (bannedchar[i] != '\0')
	{
		if (c == bannedchar[i])
			error = 1;
		i++;
	}
	return (error);
}

char	*copystring(char *result, char const *s1, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start <= end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	i;
	size_t	end;

	i = 0;
	while (isbannedchar(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	start = i;
	while (s1[i] != '\0')
		i++;
	while (isbannedchar(s1[i], set) == 1 || s1[i] == '\0')
		i--;
	end = i;
	result = malloc(((end - start) + 2) * sizeof(char));
	if (!result)
		return (NULL);
	return (copystring(result, s1, start, end));
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}*/