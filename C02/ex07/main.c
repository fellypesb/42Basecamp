#include <stdio.h>

char *ft_strupcase(char *str);
int	main(void)
{
	char str0[] = "feLLype";

	ft_strupcase(str0);
	printf("str0 : %s\n", str0);
}

//gcc -Wall -Wextra -Werror ft_strupcase.c main.c && ./a.out