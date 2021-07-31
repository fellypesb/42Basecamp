unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	lenght;

	count = 0;
	lenght = ft_strlen(src);
	if (size)
	{
		while (count < (size - 1) && *src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
			count++;
		}
		*dest = '\0';
	}
	return (lenght);
}
