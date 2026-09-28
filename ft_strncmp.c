/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 15:56:00 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/12 15:56:03 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
	if (i < n && (s1[i] != s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
