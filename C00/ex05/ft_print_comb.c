#include <unistd.h>

void	ft_separate(void)
{
	write(1, ", ", 2);
}

void	ft_putchar_triple(char char0, char char1, char char2)
{
	write(1, &char0, 1);
	write(1, &char1, 1);
	write(1, &char2, 1);
	if (char0 != '7')
		ft_separate();
}

void	ft_print_comb(void)
{
	char	char0;
	char	char1;
	char	char2;

	char0 = '0';
	char1 = '1';
	char2 = '2';
	while (char0 != '8')
	{
		while (char1 != '9')
		{
			while (char2 != ':')
			{
				ft_putchar_triple(char0, char1, char2);
				char2 = char2 + 1;
			}
			char1 = char1 + 1;
			char2 = char1 + 1;
		}
		char0 = char0 + 1;
		char1 = char0 + 1;
		char2 = char1 + 1;
	}
}
