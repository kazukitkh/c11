#include "do_op.h"

void	ft_putnbr(int nb)
{
	char	a;

	a = '2';
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = -147483648;
			ft_putchar(a);
		}
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_nbs(int *nb, char *str)
{
	while (str[nb[0]] == 32 || (str[nb[0]] >= 9 && str[nb[0]] <= 13))
		nb[0]++;
	while (str[nb[0]] == 43 || str[nb[0]] == 45)
	{
		if (str[nb[0]] == 45)
			nb[1] += 1;
		nb[0]++;
	}
	while (nb[1])
	{
		nb[4] *= -1;
		nb[1]--;
	}
	nb[2] = nb[0];
	while (str[nb[0]] >= 48 && str[nb[0]] <= 57)
		nb[0]++;
	nb[3] = nb[0] - nb[2] - 1;
}

int	ft_atoi(char *str)
{
	int	nb[8];

	nb[0] = 0;
	nb[1] = 0;
	nb[4] = 1;
	nb[6] = 0;
	ft_nbs(nb, str);
	while (nb[1] <= nb[3])
	{
		nb[7] = nb[3] - nb[1];
		nb[5] = str[nb[2]] - 48;
		while (nb[7])
		{
			nb[5] *= 10;
			nb[7]--;
		}
		nb[6] += nb[5];
		nb[1]++;
		nb[2]++;
	}
	nb[6] *= nb[4];
	return (nb[6]);
}
