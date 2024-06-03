/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:38:03 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:38:29 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!(*stack)->next)
		return (-1);
	first = *stack;
	second = first -> next;
	first -> next = second -> next;
	second -> next = first;
	return (0);
}

int	sa(t_list **stacka)
{
	if (swap(stacka) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stackb)
{
	if (swap(stackb) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stacka, t_list **stackb)
{
	if (swap(stackb) == -1)
		return (-1);
	if (swap(stacka) == -1)
		return (-1);
	ft_putendl_fd("ss", 1);
	return (0);
}
