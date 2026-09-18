#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
	t_list *head = (t_list *)malloc(sizeof(t_list));
	for(int i = 0; i < 3; i++) {
		int *curr = malloc(sizeof(int));
		*curr = i;
		t_list *node = ft_lstnew(curr);
		if (!i)
			head = node;
		else
			ft_lstadd_back(&head, node);
	}
	t_list *head1 = (t_list *)malloc(sizeof(t_list));
	head1 = head;
	while(head != NULL)
	{
//		printf("%i\t", *((int *)head->content));
		head = head->next;
	}

	printf("%i", ft_lstsize(head1));

	return 0;
}
