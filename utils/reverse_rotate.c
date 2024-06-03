/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:36:33 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:36:46 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*traveller;

	if (ft_lstsize(stack) < 2)
		return (-1);
	head = *stack;
	traveller = ft_lstlast(head);
	while (head -> next != traveller)
		head = head -> next;
	traveller -> next = *stack;
	*stack = traveller;
	head -> next = NULL;
	return (0);
}

int	rra(t_list **stacka)
{
	if (reverse_rotate(stacka) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stackb)
{
	if (reverse_rotate(stackb) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stacka, t_list **stackb)
{
	if (reverse_rotate(stacka) == -1)
		return (-1);
	if (reverse_rotate(stackb) == -1)
		return (-1);
	ft_putendl_fd("rrr", 1);
	return (0);
}
