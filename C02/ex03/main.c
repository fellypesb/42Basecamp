#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str0[] = "0123459";
	char str1[] = "a1234*";
	char str2[] = "";
	int out;

	out = ft_str_is_numeric(str0);
	printf("str0 : %i\n", out);
	out = ft_str_is_numeric(str1);
	printf("str1 : %i\n", out);
	out = ft_str_is_numeric(str2);
	printf("str2 : %i\n", out);
}
//gcc -Wall -Wextra -Werror ft_str_is_numeric.c main.c && ./a.out