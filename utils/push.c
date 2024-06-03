/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:37:44 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:37:58 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **stack1, t_list **stack2)
{
	t_list	*traveller;
	t_list	*head1;
	t_list	*head2;

	if (ft_lstsize(*stack1) == 0)
		return (-1);
	head1 = *stack1;
	head2 = *stack2;
	traveller = head1;
	head1 = head1 -> next;
	*stack1 = head1;
	if (!head2)
	{
		head2 = traveller;
		head2 -> next = NULL;
		*stack2 = head2;
	}
	else
	{
		traveller -> next = head2;
		*stack2 = traveller;
	}
	return (0);
}

int	pa(t_list **stacka, t_list **stackb)
{
	if (push(stackb, stacka) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stacka, t_list **stackb)
{
	if (push(stacka, stackb) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
