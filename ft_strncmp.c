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

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n)
		i++;
	if (i == n)
		return (s1[i - 1] - s2[i - 1]); 
	return (s1[i] - s2[i]);
}

int main()
{
	char *s1;
	char *sw;
	ft_strncmp(s1, sw, 4);
}
