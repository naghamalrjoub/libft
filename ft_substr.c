/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 13:47:41 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/17 13:48:44 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (len - start < len)
		len -= start;
	substr = malloc(len * sizeof(char));
	if (!substr)
		return (NULL);
	while (i <= len)
	{
		substr[i] = s[i + start];
		i++;
	}
	return (substr);
}
