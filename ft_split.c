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

static void	free_all(char **arr, int k)
{
	while (k > 0)
	{
		k--;
		free(arr[k]);
		arr[k] = NULL;
	}
	free(arr);
	arr = NULL;
}

static int	count_words(char const *s, char c)
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

static void	split(char const *s, char c, char **arr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j)
		{
			arr[k] = malloc((j + 1) * sizeof(char));
			if (!arr[k])
			{
				free_all(arr, k);
				return ;
			}
			ft_strlcpy(arr[k++], s + i, j + 1);
		}
		i += j;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		words;

	words = count_words(s, c);
	splitted = malloc((words + 1) * sizeof(char *));
	if (!splitted)
	{
		free(splitted);
		return (NULL);
	}
	split(s, c, splitted);
	if (!splitted)
		return (NULL);
	splitted[words] = NULL;
	return (splitted);
}
