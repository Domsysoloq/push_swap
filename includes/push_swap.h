/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcroxatt <lcroxatt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:09:58 by lcroxatt          #+#    #+#             */
/*   Updated: 2024/06/05 20:07:13 by lcroxatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

int		main(int ac, char **av);
t_list	*ft_filllist_a(long arg);
void	ft_error(int code);
void	print_list(t_list *head);
t_list	**ft_checkinput(int ac, char **av);
int		ft_isnumber(char *arg, int *maxlength);
long	ft_atoi(const char *str);
void	ft_sortlist(t_list **stacka);
t_list	**ft_createstackb(t_list **stacka);
void	algo(t_list **stacka, t_list **stackb, int ac);

//swap files

int		swap(t_list **stack);
int		sa(t_list **stacka);
int		sb(t_list **stackb);
int		ss(t_list **stacka, t_list **stackb);

//push files

int		push(t_list **stack1, t_list **stack2);
int		pa(t_list **stacka, t_list **stackb);
int		pb(t_list **stacka, t_list **stackb);

//rotate files

int		rotate(t_list **stack);
int		ra(t_list **stacka);
int		rb(t_list **stackb);
int		rr(t_list **stacka, t_list **stackb);

//reverse rotate files

int		reverse_rotate(t_list **stack);
int		rra(t_list **stacka);
int		rrb(t_list **stackb);
int		rrr(t_list **stacka, t_list **stackb);

#endif