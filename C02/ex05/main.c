#include <stdio.h>

int	ft_str_is_uppercase(char *str);
int	main(void)
{
	char str0[] = "ASDFASD";
	char str1[] = "ADsdf";
	char str2[] = "";
	int out;

	out = ft_str_is_uppercase(str0);
	printf("str0 : %i\n", out);
	out = ft_str_is_uppercase(str1);
	printf("str1 : %i\n", out);
	out = ft_str_is_uppercase(str2);
	printf("str2 : %i\n", out);
}