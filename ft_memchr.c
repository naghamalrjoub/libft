/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:36:41 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/19 11:36:44 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = s;
	c = (unsigned char)c;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
