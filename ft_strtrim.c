/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 10:55:18 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/20 10:55:22 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_c(char const *s1, size_t len, char const *set, int pos)
{
	long	i;

	i = 0;
	while (pos && i < (long)len && in_set(s1[i], set))
		i++;
	while (!pos && i >= 0 && in_set(s1[len - i - 1], set))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	st;
	size_t	end;
	char	*str;
	int		count;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	st = count_c(s1, len, set, 1);
	end = count_c(s1, len, set, 0);
	count = st + end;
	str = malloc(sizeof(char) * (len - count + 1));
	while (st + i < len - end)
	{
		str[i] = s1[st + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
