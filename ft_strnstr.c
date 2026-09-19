/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:40:22 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/19 11:40:23 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strnstr(const char *big, const char *little, unsigned long len)
{
	int	i;
	int	j;

	i = 0;
	if (!big || !little)
		return (NULL);
	while (big[i])
	{
		j = 0;
		while (little[j] && big[i + j] && (little[j] == big[i + j]))
			j++;
		if (!little[j])
			return ((char *)&big[i]);
	}
	return (NULL);
}
