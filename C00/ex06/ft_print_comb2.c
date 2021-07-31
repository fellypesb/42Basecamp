#include <unistd.h>

void	ft_separate(void)
{
	write(1, ", ", 2);
}

void	ft_putchar_four(char char0, char char1, char char2, char char3)
{
	if ((char0 - '0') * 10 + (char1 - '0') < (char2 - '0') * 10 + (char3 - '0'))
	{
		if (char0 == '9' && char1 == '8' && char2 == '9' && char3 == '9')
		{
			write(1, &char0, 1);
			write(1, &char1, 1);
			write(1, " ", 1);
			write(1, &char2, 1);
			write(1, &char3, 1);
		}
		else
		{
			write(1, &char0, 1);
			write(1, &char1, 1);
			write(1, " ", 1);
			write(1, &char2, 1);
			write(1, &char3, 1);
			ft_separate();
		}
	}
}

void	ft_inicializer(char *char0, char *char1, char *char2, char *char3)
{
	*char0 = '0';
	*char1 = '0';
	*char2 = '0';
	*char3 = '1';
}

void	ft_inc_reset(char *char0, char *char1)
{
	*char0 = *char0 + 1;
	*char1 = '0';
}

void	ft_print_comb2(void)
{
	char	char0;
	char	char1;
	char	char2;
	char	char3;

	ft_inicializer(&char0, &char1, &char2, &char3);
	while (char0 != ':')
	{
		while (char1 != ':')
		{
			while (char2 != ':')
			{
				while (char3 != ':')
				{
					ft_putchar_four(char0, char1, char2, char3);
					char3++;
				}
				ft_inc_reset(&char2, &char3);
			}
			ft_inc_reset(&char1, &char2);
		}
		ft_inc_reset(&char0, &char1);
	}
}
