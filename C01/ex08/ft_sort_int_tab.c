void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size - 1)
	{	
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				ft_swap(&tab[j], &tab[i]);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
