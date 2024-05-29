/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:19:33 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/10 18:32:05 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*traveller;

	while (*lst)
	{
		traveller = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = traveller;
	}
	free(*lst);
	*lst = NULL;
}
