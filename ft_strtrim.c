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

static int	in_set(char c, char const *set)
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

static int	count_c(char const *s1, size_t len, char const *set, int pos)
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
	int		count;

	len = ft_strlen(s1);
	st = count_c(s1, len, set, 1);
	if (st == len)
		return (ft_strdup(""));
	end = count_c(s1, len, set, 0);
	count = st + end;
	return (ft_substr(s1, st, len - count));
}
