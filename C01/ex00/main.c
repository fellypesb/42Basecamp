#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	number;

	number = 100000;
	ft_ft(&number);
	printf("%i", number);
}