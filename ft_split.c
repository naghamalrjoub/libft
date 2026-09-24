/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 15:49:51 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/17 15:49:53 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	free_all(char **splitted, int j)
{
	while (j >= 0)
	{
		free(splitted[j]);
		j--;
	}
}

int	count_words(char const *s, char c)
{
	int i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			cnt++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (cnt);
}

void	allocate(char **splitted, char c, const char *s)
{
	int	j;
	int	i;
	int	count;

	j = 0;
	i = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break;
		while (s[i] && s[i] != c)
		{
			i++;
			count++;
		}
		splitted[j] = (char *)malloc((count + 1) * sizeof(char));
		if (!splitted[j])
			free_all(splitted, j);
		j++;
	}
}

void	save(char **splitted, char c, const char *s)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	i = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break;
		while (s[i] && s[i] != c)
		{
			splitted[j][k] = s[i];
			i++;
			k++;
		}
		splitted[j][k + 1] = '\0';
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words_count;
	char	**splitted;

	words_count = count_words(s, c);
	splitted = malloc((words_count + 1) * sizeof(char *));
	if (!splitted)
		free(splitted);
	allocate(splitted, c, s);
	save(splitted, c, s);
	splitted[words_count] = NULL;
	return (splitted);
}
