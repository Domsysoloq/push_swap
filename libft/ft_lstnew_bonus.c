/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:03:49 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/27 18:38:01 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content, int length)
{
	t_list	*head;

	head = malloc(length * sizeof(t_list));
	if (!head)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}
