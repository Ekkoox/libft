#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *new;
	int i;

	i = 0;
	new = lst;
	while(new) 
	{
		new = new->next;
		i++;
	}
	return(i);
}