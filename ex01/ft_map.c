/*#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	char a;

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

int main(void)
{
    ft_putnbr(9);
    ft_putchar('\n');
    return (0);
}
int	ft_add(int a)
{
	return (a * 2);
}*/
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*t;
	int	i;

	i = 0;
	t = malloc(sizeof(int) * length);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i ++;
	}
	return (t);
}

/*int main(void)
{
	int	tab[5] = {1,2,3,4,5};
	int	i;
	int	*nbs;

    i = -1;
	nbs = ft_map(tab, 5, &ft_add);
	while (++i < 5)
    ft_putnbr(nbs[i]);
	return (0);
}*/