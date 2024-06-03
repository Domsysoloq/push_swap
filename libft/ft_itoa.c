/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:53:51 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:52:57 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/

size_t	resultlen(int n)
{
	size_t	resultlen;

	resultlen = 0;
	while (n >= 10 || n <= -10)
	{
		resultlen++;
		n /= 10;
	}
	return (resultlen + 2);
}

void	copyint(char *string, size_t i, unsigned int *n, size_t stringsize)
{
	while (i < stringsize - 1)
		i++;
	string[i] = '\0';
	i--;
	while (*n >= 10)
	{
		string[i] = (*n % 10) + 48;
		*n /= 10;
		i--;
	}
	string[i] = *n + 48;
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	resultsize;
	size_t	i;

	i = 0;
	resultsize = resultlen(n);
	if (n < 0)
		resultsize++;
	result = malloc(resultsize * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[i] = '-';
		i++;
		n *= -1;
	}
	copyint(result, i, (unsigned int *)&n, resultsize);
	return (result);
}

/*int    main(int ac, char **av)
{
    (void)ac;
    printf ("%s\n", ft_itoa(atoi(av[1])));
    return (0);
}*/