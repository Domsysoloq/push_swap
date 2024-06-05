/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:32:17 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/05 19:53:22 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	**stacka;

	stacka = ft_checkinput(ac, av);
	ft_sortlist(stacka);
	return (0);
}

t_list	*ft_filllist_a(long arg)
{
	static int		i = 0;
	static t_list	*head = NULL;
	t_list			*newnode;

	if (i == 0)
	{
		head = ft_lstnew((long*)arg);
		i++;
	}
	else
	{
		newnode = ft_lstnew((long*)arg);
		ft_lstadd_front(&head, newnode);
		i++;
	}
	return (head);
}
