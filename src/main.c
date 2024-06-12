/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:32:17 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/12 19:38:32 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	**stacka;

	if (ac == 2)
		av = ft_split(av[1], ' ');
	stacka = ft_checkinput(ac, av);
	free(av);
	if (ft_issorted(stacka) == 1)
	{
		free(stacka);
		return (0);
	}
	ft_sortlist(stacka);
	//print_list(*stacka);
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
		ft_lstadd_back(&head, newnode);
		i++;
	}
	return (head);
}
