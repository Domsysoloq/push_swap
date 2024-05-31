/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:09:58 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/05/31 18:17:30 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <stdio.h>

int 	main(int ac, char **av);
t_list  *ft_filllistA(long arg);
void    ft_error(int code);
void 	print_list(t_list *head);
t_list	*ft_checkinput(int ac, char **av);
int		ft_isnumber(char *arg, int *maxlength);
long	ft_atoi(const char *str);
void	ft_sortlist(/*t_list **head*/void);

#endif