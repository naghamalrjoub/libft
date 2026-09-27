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

#include "libft.h"

static int	count(int n)
{
	int	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int nb)
{
	char	*ans;
	int		i;
	long	n;

	n = nb;
	i = count(n);
	if (n < 0)
		n *= -1;
	ans = malloc(sizeof(char) * (i + 1));
	if (!ans)
		return (NULL);
	ans[i] = '\0';
	if (!n)
		ans[--i] = '0';
	while (n)
	{
		i--;
		ans[i] = n % 10 + '0';
		n /= 10;
	}
	if (i)
		ans[0] = '-';
	return (ans);
}
