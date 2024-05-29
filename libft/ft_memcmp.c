/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:01:46 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/28 15:59:49 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ps1 = s1;
	const unsigned char	*ps2 = s2;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ps1[i] < ps2[i])
			return (ps1[i] - ps2[i]);
		if (ps1[i] > ps2[i])
			return (ps1[i] - ps2[i]);
		if (ps1[i] == ps2[i])
			i++;
	}
	return (0);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("%d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
	return (0);
}*/