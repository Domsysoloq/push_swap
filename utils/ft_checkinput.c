/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:56:30 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/27 18:40:22 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_checkinput(int ac, char **av)
{
	int	i;
	int	tmp;
	t_list	*lst;
	
	i = 0;
	if (ac < 2)
		ft_error;
	while (av[i])
	{
		if (ft_isnumber(av[i]) == 1)
		{
			ft_error;
			return (1);
		}
		tmp = ft_atoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error;
		lst = ft_filllst((ac - 1), tmp);
		i++;
	}
	return (lst);
}

int	ft_isnumber(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (ft_isdigit(arg[i]) == 0 && arg[i + 1] != '+')
			i++;
		if (arg[0] == '+' && ft_isdigit(arg[i + 1] == 0))
			i++;
		if (arg[0] == '-' && ft_isdigit(arg[i + 1] == 0))
			i++;
		else
			return (1);
	}
	return (0);
}