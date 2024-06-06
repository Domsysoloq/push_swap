/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:30:54 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/06 20:41:32 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_short(t_list **stacka, t_list **stackb)
{
	int		size;

	(void)stackb;
	size = ft_lstsize (*stacka);
	//printf ("%d\n", size);
	if (size == 2)
		ft_sort2(stacka);
	if (size == 3)
		ft_sort3(stacka);
	if (size == 4)
		ft_sort4(stacka, stackb);
	if (size == 5)
		ft_sort5(stacka, stackb);
	return ;
}

void	ft_sort2(t_list **stacka)
{
	t_list	*head;
	t_list	*traveller;

	//print_list(*stacka);
	head = *stacka;
	traveller = head -> next;
	if (head->content > traveller ->content)
		sa(stacka);
	return ;
}

void	ft_sort3(t_list **stacka)
{
	t_list	*head;
	t_list	*traveller;
	t_list	*traveller2;

	head = *stacka;
	traveller = head->next;
	traveller2 = traveller->next;
	//print_list(*stacka);
	if (head->content > traveller->content)
	{
		sa(stacka);
		if (head->content > traveller2->content)
		{
			rra(stacka);
			ft_sort2(stacka);
		}
	}
	else if (traveller->content > traveller2->content)
	{
		rra(stacka);
		ft_sort2(stacka);
	}
	return ;
}

void	ft_sort4(t_list **stacka, t_list **stackb)
{
	t_list	*head;
	long	max;

	head = *stacka;
	max = (long)head->content;
	while (head)
	{
		if (max < (long)head->content)
			max = (long)head->content;
		head = head->next;
	}
	head = *stacka;
	while ((long)head->content != max)
		head = head->next;
	while (head->next != NULL)
		rra(stacka);
	rra(stacka);
	pb(stacka, stackb);
	ft_sort3(stacka);
	pa(stacka, stackb);
	ra(stacka);
	return ;
}

void	ft_sort5(t_list **stacka, t_list **stackb)
{
	t_list	*head;
	long	min;

	head = *stacka;
	min = (long)head->content;
	while (head)
	{
		if (min > (long)head->content)
			min = (long)head->content;
		head = head->next;
	}
	head = *stacka;
	while ((long)head->content != min)
		head = head->next;
	while (head->next != NULL)
		rra(stacka);
	rra(stacka);
	pb(stacka, stackb);
	ft_sort4(stacka, stackb);
	pa(stacka, stackb);
	return ;
}
