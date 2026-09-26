/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:50:56 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/23 16:50:57 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	if (!lst)
		return (NULL);
	if (!f)
		return (lst);
	while (lst)
	{
		node = ft_lstnew(lst->content);
		if (!node)
		{
			if (head)
				ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		node->content = f(lst->content);
		lst = lst->next;
	}
	return (head);
}
