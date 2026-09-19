/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 12:10:58 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/19 12:11:01 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	free_node(void *node)
{
	free((t_list *)node);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	head = *lst;
	while (*lst)
	{
		curr = *lst;
		*lst = (*lst)->next;
		del(curr);
		curr = NULL;
	}
}

int main() {
	t_list *head;

	for (int i = 0; i < 3; i++)
	{
		t_list *node = malloc(sizeof(t_list));
		node = ft_lstnew("hi");
		if (!head)
			head = node;
		else
			ft_lstadd_back(&head, node);
	}
	printf("%i\n", ft_lstsize(head));
	ft_lstclear(&head, free_node);
	printf("%i\n", ft_lstsize(head));
}
