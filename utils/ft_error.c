/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:50:04 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:47:54 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(int code)
{
	if (code == 0)
		printf("Error Main\n");
	if (code == 1)
		printf("Error InputCheck\n");
	exit(EXIT_FAILURE);
}
