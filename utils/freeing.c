
#include "push_swap.h"

void	free_all(t_swap *tab, char **args)
{
	if (!tab)
		return ;
	ft_lstclear(tab->stack_a);
	ft_lstclear(tab->stack_b);
	free(tab);
	free_args(args);
}

void	ft_lstclear(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
}

void	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i] != NULL)
	{
		free(args[i]);
		i++;
	}
	free(args);
}
