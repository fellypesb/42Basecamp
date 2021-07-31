void	ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
}

unsigned int	ft_char_is_alpha(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (1);
	return (0);
}

void	ft_charupcase(char *c)
{
	*c = *c - 32;
}

unsigned int	ft_char_is_alphanum(char *c)
{
	if ((*c >= 'a' && *c <= 'z') \
	|| (*c >= 'A' && *c <= 'Z') \
	|| (*c >= '0' && *c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int				index;
	unsigned int	check_alpha;
	unsigned int	check_alphanum;

	index = 1;
	check_alpha = 0;
	check_alphanum = 0;
	ft_strlowcase(str);
	while (str[index] != '\0')
	{
		check_alpha = ft_char_is_alpha(&str[index]);
		check_alphanum = ft_char_is_alphanum(&str[index - 1]);
		if (index - 1 == 0 && check_alpha == 1)
			ft_charupcase(&str[index - 1]);
		if (check_alphanum == 0 && check_alpha == 1)
			ft_charupcase(&str[index]);
		index++;
	}
	return (str);
}
