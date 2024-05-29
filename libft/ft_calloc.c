/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:30:46 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/10 18:34:18 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total;

	if (size == 0)
	{
		result = (void *) malloc(0);
		if (!result)
			return (NULL);
		return (result);
	}
	total = count * size;
	result = (void *) malloc(total);
	if (!result)
		return (NULL);
	ft_memset(result, 0, total);
	return (result);
}

/*int	main(int ac, char **av)
{
	(void)ac;
	printf ("&")
	return (0);
}*/