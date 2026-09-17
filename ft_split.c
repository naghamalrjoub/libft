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

#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

void	free_all(char **splitted, int j)
{
	while (j)
	{
		free(splitted[j - 1]);
		j--;
	}
	free(splitted);
}

void	save(const char *s, char **splitted, int st, int end, int j)
{
	int	k;

	k = 0;
	splitted[j] = malloc(sizeof(char) * (end - st + 1));
	if (!splitted[j])
		free_all(splitted, j);
	while (st < end)
	{
		splitted[j][k] = s[st];
		st++;
	}
	splitted[j][k] = '\0';
}

int	count_len(char const *s, char c, char **splitted)
{
	int	i;
	int	count;
	int	st;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		count = 0;
		while (s[i] && s[i] == c)
			i++;
		st = i;
		while (s[i] && s[i] != c)
		{
			i++;
			count++;
		}
		if (i > st)
			save(s, splitted, st, i, j++);
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	int		words_count;
	char	**splitted;
	int		len;

	words_count = count_words(s, c);
	splitted = malloc((words_count + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	splitted[words_count] = NULL;
	return splitted;
}
