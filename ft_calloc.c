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

#include <stdlib.h>
#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	void	*alloc;

	alloc = malloc(n * size);
	ft_bzero(alloc, size);
	return (alloc);
}
