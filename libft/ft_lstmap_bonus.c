/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:35:06 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/10 18:32:19 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*headnewlst;
	t_list	*newnode;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	headnewlst = NULL;
	while (lst != NULL)
	{
		newnode = ft_lstnew(f(lst -> content));
		if (newnode == NULL)
			ft_lstclear(&headnewlst, del);
		ft_lstadd_back(&headnewlst, newnode);
		lst = lst -> next;
	}
	return (headnewlst);
}
