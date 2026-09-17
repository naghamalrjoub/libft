/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:00:16 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/12 14:00:17 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	//what happens if one of the ptrs was null
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return (i);
}
