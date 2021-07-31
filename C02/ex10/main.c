#include <stdio.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[11] = "42Basecamp";
	char dest1[11]= "";
	char dest2[11]= "";


	printf("%i, %s\n", ft_strlcpy(dest1, src, 7), dest1);
	printf("%lu, %s\n", strlcpy(dest2, src, 7), dest2);
}

//gcc -Wall -Wextra -Werror ft_strlcpy.c main.c && ./a.out