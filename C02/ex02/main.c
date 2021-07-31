#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	main(void)
{
	char str0[] = "Basecamp";
	char str1[] = "";
	char str2[] = "HumanCoder :)";
	int  out;

	out = ft_str_is_alpha(str0);
	printf("str0 : %i\n", out);
	out = ft_str_is_alpha(str1);
	printf("str1 : %i\n", out);
	out = ft_str_is_alpha(str2);
	printf("str2 : %i\n", out);

}

//gcc -Wall -Wextra -Werror ft_str_is_alpha.c main.c && ./a.out