#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	main(void)
{
	char dest[10];
	char *ptr;

	ptr = dest;
	ft_strncpy(dest, "Human Coder", 2);
	printf("Out : %s\n", dest);
}
//gcc -Wall -Wextra -Werror ft_strncpy.c main.c && ./a.out