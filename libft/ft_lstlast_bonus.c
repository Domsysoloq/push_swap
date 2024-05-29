/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:02:02 by lcroxatt          #+#    #+#             */
/*   Updated: 2023/11/07 19:16:05 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*traveller;

	if (lst == NULL)
		return (NULL);
	traveller = lst;
	while ((traveller -> next) != NULL)
		traveller = traveller -> next;
	return (traveller);
}
