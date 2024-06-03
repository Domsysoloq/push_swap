/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:56:30 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:46:16 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_checkinput(int ac, char **av)
{
	int		i;
	long	tmp;
	t_list	*lst;
	int		maxlength;

	i = 1;
	if (ac < 2)
		ft_error(1);
	while (av[i])
	{
		if (ft_isnumber(av[i], &maxlength) == 1)
			ft_error(1);
		printf ("%d\n", maxlength);
		tmp = ft_atoi(av[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			ft_error(1);
		lst = ft_filllistA(tmp);
		i++;
	}
	print_list(lst);
	return (lst);
}

int	ft_isnumber(char *arg, int	*maxlength)
{
	int			i;
	static int	isitmaxlength = 0;

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
	if (i > isitmaxlength)
	{
		isitmaxlength = i;
		*maxlength = i;
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
