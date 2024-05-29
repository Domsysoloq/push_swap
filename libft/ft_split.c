/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:03:48 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/10 18:31:48 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	resultsize(char const *string, char sep)
{
	size_t	i;
	size_t	resultsize;

	resultsize = 0;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] != sep)
		{
			resultsize++;
			while (string[i] != sep && string[i] != '\0')
				i++;
		}
		if (string[i] != '\0')
			i++;
	}
	return (resultsize);
}

size_t	strsize(const char *string, char sep, size_t start)
{
	size_t	result;

	result = 0;
	while (string[start] != sep && string[start] != '\0')
	{
		result++;
		start++;
	}
	return (result);
}

int	checkinput(char const *s)
{
	if (!s)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	iresult;
	size_t	i2;
	char	**result;

	if (checkinput(s) == 1)
		return (NULL);
	iresult = 0;
	i = 0;
	i2 = 0;
	result = (char **) malloc((resultsize(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (iresult < resultsize(s, c))
	{
		if (s[i] != c && s[i] != '\0')
		{
			result[iresult] = ft_substr(s, i, strsize(s, c, i));
			i += strsize(s, c, i);
			iresult++;
		}
		i++;
	}
	result[iresult] = NULL;
	return (result);
}
