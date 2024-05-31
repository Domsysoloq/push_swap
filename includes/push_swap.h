/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:09:58 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/31 16:55:25 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <stdio.h>

int main(int ac, char **av);
t_list  *ft_filllist(long arg);
void    ft_error(void);
void printList(t_list* head);
t_list	*ft_checkinput(int ac, char **av);
int	ft_isnumber(char *arg);

#endif