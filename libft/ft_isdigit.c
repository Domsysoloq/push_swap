/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:09:37 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/31 16:45:50 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (1);
	return (0);
}

/*int main(int ac, char**av)
{
    (void)ac;
    printf ("%d\n", ft_isdigit(atoi(av[1])));
    return  (0);
}*/