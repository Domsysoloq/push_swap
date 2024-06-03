/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:51:17 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/03 18:49:37 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	printf("List:\n");
	while (current != NULL)
	{
		printf("%d \n", (int)current->content);
		current = current->next;
	}
	printf("\n");
}
