#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
int	main(void)
{
	int	matrix[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int index;
	int size;

	index = 0;
	size = sizeof(matrix) / sizeof(matrix[0]);
	ft_rev_int_tab(matrix, size);
	printf("Revector : ");
	while (index < size)
	{
		printf("%i", matrix[index]);
		index++;
	}
	printf("\n");
}