/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:35:34 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/17 13:35:39 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*alloc;

	if (size > 0 && n >= SIZE_MAX / size)
		return (NULL);
	alloc = malloc(n * size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, size * n);
	return (alloc);
}
