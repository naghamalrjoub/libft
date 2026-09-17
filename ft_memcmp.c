int	ft_memcmp(const void *s1, const void *s2, unsigned long int n)
{
	unsigned long int	i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (!str1 || !str2 || !n)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}
