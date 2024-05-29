/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:45:39 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/10/28 18:14:26 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	len;
	int	n;

	n = 0;
	len = 0;
	while (s[n] != 0)
	{
		len++;
		n++;
	}
	return (len);
}

/*int main(int ac, char**av)
{
    (void)ac;
    printf ("%d\n", ft_strlen(av[1]));
    return(0);
}*/