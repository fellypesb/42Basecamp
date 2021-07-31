#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
int	main(void)
{
	int matrix[] = {100,15,30,1,2,-1,-17,0};
	int size;
	int index;
	
	index = 0;
	size = sizeof(matrix) / sizeof(matrix[0]);
	ft_sort_int_tab(matrix, size);
	while (index < size)
	{
		printf("%i ", matrix[index]);
		index++;
	}
}