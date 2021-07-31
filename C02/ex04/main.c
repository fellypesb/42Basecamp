#include <stdio.h>

int	ft_str_is_lowercase(char *str);
int	main(void)
{
	char str0[] = "asdfsdsd";
	char str1[] = "aaAfa*";
	char str2[] = "";
	int out;

	out = ft_str_is_lowercase(str0);
	printf("str0 : %i\n", out);
	out = ft_str_is_lowercase(str1);
	printf("str1 : %i\n", out);
	out = ft_str_is_lowercase(str2);
	printf("str2 : %i\n", out);
}