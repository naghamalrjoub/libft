/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 12:06:53 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/19 12:06:54 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	free_node(t_list *node)
{
	free(node->content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
	free(lst);
}
