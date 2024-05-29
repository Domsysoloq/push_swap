/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:32:17 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/27 18:41:16 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*head;

	head = ft_checkinput(ac, av);
	
	
}

t_list	*ft_filllist(int length, int arg)
{
	static int	i = 0;
	t_list	*head;
	
	if (i = 0)
	{
		head = ft_lstnew(arg, length);
		i++;
	}
	ft_lstadd_front(&head, arg);
	return (head);
}