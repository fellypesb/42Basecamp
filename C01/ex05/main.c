#include <unistd.h>

void	ft_putstr(char *str);
int	main(void)
{
	char	str[] = "Olá mundo!";

	ft_putstr(str);
}