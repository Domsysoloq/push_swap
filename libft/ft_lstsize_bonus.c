/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:42:06 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/07 19:01:36 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*traveller;
	int		result;

	result = 0;
	traveller = lst;
	while (traveller != NULL)
	{
		result++;
		traveller = traveller -> next;
	}
	return (result);
}
