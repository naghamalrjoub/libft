#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "list.h"

int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	head = ft_lstnew("hello");
	for(int i = 0; i < 3; i++) {
		int *curr = malloc(sizeof(int));
		*curr = i;
		t_list *node = ft_lstnew(curr);
		ft_lstadd_front(&head, node);
	}

	while(head->next != NULL)
	{
		printf("%x\t", *((int *)head->content));
		head = head->next;
	}
	return 0;
}
