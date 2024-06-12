/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:02:00 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/12 19:39:11 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortlist(t_list **stacka)
{
	t_list	**stackb;

	if (ft_issorted(stacka) == 1)
		ft_error(5);
	stackb = ft_createstackb(stacka);
	//print_list(*stacka);
	//print_list(*stackb);
	if ((ft_lstsize(*stacka) -1 <= 5))
		ft_sort_short(stacka, stackb);
	/*else
		ft_algo(stacka, stackb);*/
	//print_list(*stacka);
	//print_list(*stackb);
	return ;
}

t_list	**ft_createstackb(t_list **stacka)
{
	t_list	*head;
	t_list	*traveller;
	int		count;
	t_list	**head_ptr;
	
	head_ptr = (t_list **)malloc(sizeof(t_list *));
	if (!head_ptr)
    	ft_error(3);
	count = 0;
	head = ft_lstnew((long*)0);
	while (count < (ft_lstsize(*stacka) - 1))
	{
		traveller = ft_lstnew((long*)0);
		ft_lstadd_front(&head, traveller);
		count++;
	}
	*head_ptr = head;
	return (head_ptr);
}