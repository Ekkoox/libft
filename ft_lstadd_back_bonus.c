#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	ptr = *lst;
	if(!lst || !new)
		return;
	if(*lst)
	{
		ptr = ft_lstlast(*lst);
		ptr->next = new;
	}
	else
		*lst = new;
}