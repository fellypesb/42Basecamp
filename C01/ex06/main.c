#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	str[] = "fellype";
	int		len;

	len = ft_strlen(str);
	printf("Size = %i\n", len);
}
