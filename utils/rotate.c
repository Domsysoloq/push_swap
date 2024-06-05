/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:37:07 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/05 17:24:40 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*traveller;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	traveller = ft_lstlast(head);
	*stack = head -> next;
	head -> next = NULL;
	traveller -> next = head;
	return (0);
}

int	ra(t_list **stacka)
{
	if (rotate(stacka) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list **stackb)
{
	if (rotate(stackb) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stacka, t_list **stackb)
{
	if (rotate(stacka) == -1)
		return (-1);
	if (rotate(stackb) == -1)
		return (-1);
	ft_putendl_fd("rr", 1);
	return (0);
}
