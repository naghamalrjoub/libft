/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 14:09:21 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/12 14:09:22 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	dlen;

	j = 0;
	if (dst)
		dlen = ft_strlen(dst);
	else
		dlen = 0;
	if ((dlen >= size))
		return (size + ft_strlen(src));
	while (size && src && src[j] && dlen + j < size - 1)
	{
		dst[dlen + j] = src[j];
		j++;
	}
	if (size)
		dst[dlen + j] = '\0';
	return (dlen + ft_strlen(src));
}
