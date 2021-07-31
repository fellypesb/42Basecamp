char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		count++;
	}
	*dest = '\0';
	return (dest);
}
