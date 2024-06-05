/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:50:04 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/05 19:27:09 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int code)
{
	if (code == 0)
		printf("Error Main\n");
	if (code == 1)
		printf("Error InputCheck\n");
	if (code == 2)
		printf("Error Sortlist\n");
	if (code == 3)
		printf("Error Malloc\n");
	if (code == 4)
		printf("Error Algo\n");
	exit(EXIT_FAILURE);
}
