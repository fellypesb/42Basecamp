#include <stdio.h>

char *ft_strlowcase(char *str);
int	main(void)
{
	char str0[] = "ASDDssdfgd";

	ft_strlowcase(str0);
	printf("str0 : %s\n", str0);
}

//gcc -Wall -Wextra -Werror ft_strlowcase.c main.c && ./a.out