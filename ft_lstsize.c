#include "list.h"
#include <stdlib.h>

unsigned int ft_lstsize(t_list *lst)
{
	unsigned int cnt;
	t_list		*curr;

	curr = lst; 
	cnt = 0;
	while (curr != NULL)
	{
		cnt++;
		curr = curr->next;
	}
	return (cnt);
}
