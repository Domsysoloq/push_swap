/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:56:30 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/31 16:50:07 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_checkinput(int ac, char **av)
{
	int	i;
	long	tmp;
	t_list	*lst;
	
	i = 1;
	if (ac < 2)
		ft_error();
	while (av[i])
	{
		if (ft_isnumber(av[i]) == 1)
			ft_error();
		tmp = ft_atoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error();
		lst = ft_filllist(tmp);
		i++;
	}
	printList(lst);
	return (lst);
}

int	ft_isnumber(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (ft_isdigit(arg[i]) == 0)
			i++;
		else if (arg[0] == '+')
			i++;
		else if (arg[0] == '-')
			i++;
		else
			return (1);
	}
	return (0);
}