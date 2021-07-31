#include <stdio.h>

int ft_str_is_printable(char *str);
int	main(void)
{
	char str0[] = " sdfASD#`_";
	char str1[] = "çá§ sdfg(0";
	char str2[] = "";
	int out;

	out = ft_str_is_printable(str0);
	printf("str0 : %i\n", out);
	out = ft_str_is_printable(str1);
	printf("str1 : %i\n", out);
	out = ft_str_is_printable(str2);
	printf("str2 : %i\n", out);
}

//gcc -Wall -Wextra -Werror ft_str_is_printable.c main.c && ./a.out