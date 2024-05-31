/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:32:17 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/31 16:54:49 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list  *head;

    head = ft_checkinput(ac, av);
    
    return (0);
}

t_list  *ft_filllist(long arg)
{
    static int  i = 0;
    static  t_list  *head = NULL;
    t_list  *newnode;
    
    if (i == 0)
    {
        head = ft_lstnew((void *)(long)arg);
        i++;
    }
    else
    {
        newnode = ft_lstnew((void *)(long)arg);
        ft_lstadd_front(&head, newnode);
        i++;
    }
    return (head);
}

void    ft_error(void)
{
    printf ("Error\n");
    exit(EXIT_FAILURE);
}

void printList(t_list* head)
{
    t_list *current = head;
    
    printf("List:\n");
    while (current != NULL)
    {
        printf("%d \n", (int)current->content);
        current = current->next;
    }
    printf("\n");
}