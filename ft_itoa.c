/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:00:06 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/17 17:00:08 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	count(int n)
{
	int	cnt;

	cnt = 0;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		i;

	i = count(n);
	ans = malloc(sizeof(char) * (count(n) + 1));
	if (!ans)
		return (NULL);
	while (n)
	{
		i--;
		ans[i] = n % 10;
		n /= 10;
	}
	return (ans);
}
