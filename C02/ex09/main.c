#include <stdio.h>

char *ft_strcapitalize(char *str);
int	main(void)
{
	char string[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("\nBefore : %s\n", string);
	ft_strcapitalize(string);
	printf("After : %s\n\n", string);
}
//gcc -Wall -Wextra -Werror ft_strcapitalize.c main.c && ./a.out