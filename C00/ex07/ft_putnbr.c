#include <unistd.h>

int	ft_check_number(int nb)
{
	if (nb >= 0)
	{
		return (nb);
	}
	else
	{
		write(1, "-", 1);
		if (!(nb == -2147483648))
		{
			nb = nb * (-1);
			return (nb);
		}
		else
		{
			nb = 214748364;
			return (nb);
		}
	}
}

int	ft_digit_counter(int nb)
{
	int	cont;

	cont = 0;
	while (nb >= 10)
	{
		nb /= 10;
		cont++;
	}
	return (cont);
}

int	ft_pot(int exp)
{
	int	pot;

	pot = 10;
	while (exp > 1)
	{
		pot *= 10;
		exp--;
	}
	return (pot);
}

void	ft_putchar(char char0)
{
	write(1, &char0, 1);
}

void	ft_putnbr(int nb)
{
	unsigned char	is_max;
	int				div;

	is_max = 'f';
	if (nb == -2147483648)
		is_max = 't';
	nb = ft_check_number(nb);
	div = ft_pot(ft_digit_counter(nb));
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		while (div >= 10)
		{
			ft_putchar(nb / div + '0');
			nb = nb % div;
			div /= 10;
		}
		ft_putchar(nb % 10 + '0');
		if (is_max == 't')
			ft_putchar('8');
	}
}
