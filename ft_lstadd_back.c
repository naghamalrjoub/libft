#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *nw)
{
	t_list	*curr;

	curr = ft_lstlast(*lst);
	curr->next = nw;
	nw->next = NULL;
}
