/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:56:30 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/12 19:39:39 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_checkinput(int ac, char **av)
{
	int		i;
	long	tmp;
	t_list	*lst;
	t_list	**lst_ptr;

	lst_ptr = (t_list **)malloc(sizeof (t_list));
	i = 0;
	if (ac < 2)
		ft_error(1);
	while (av[i])
	{
		if (ft_isnumber(av[i]) == 1)
			ft_error(1);
		tmp = ft_atoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error(1);
		lst = ft_filllist_a(tmp);
		i++;
	}
	*lst_ptr = lst;
	return (lst_ptr);
}

int	ft_isnumber(char *arg)
{
	int			i;

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

long	ft_atoi(const char *str)
{
	long	resultat;
	long	signe;

	signe = 1;
	resultat = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
	{
		signe *= -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		ft_error(1);
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + *str - '0';
		str++;
	}
	return (resultat * signe);
}

int	ft_issorted(t_list **stack)
{
	t_list	*head;
	t_list	*traveller;

	head = *stack;
	traveller = head->next;
	while (traveller)
	{
		if (head->content > traveller->content)
			return (0);
		head = head->next;
		traveller = traveller->next;
	}
	return (1);
}