/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:01:09 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/28 16:01:28 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] == 0 && s2[i] != 0)
		return (-1);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	}
	return (0);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	return (0);
}*/