#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int	main(void)
{
	char dest[7]="Brasil";
	
	ft_strcpy(dest, "Exame Final");
	printf("Out : %s\n", dest);
}
//gcc -Wall -Wextr -Werror ft_strcpy.c main.c && ./a.out