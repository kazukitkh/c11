void	ft_sort_string_tab(char **tab)
{
	int		length;
	char	*tmp;
	int		j;
	int		k;

	length = -1;
	while (tab[++length]);
	while (--length)
	{
		j = 0;
		while (++j < length)
		{
			k = 0;
			while (tab[j][k] == tab[j + 1][k])
				k ++;
			if (tab[j + 1][k] < tab[j][k])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
}

/*#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char **src)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	c = '\n';
	if (!src)
		while (!src[++i - 1])
			write(1, &c, 1);
	while (src[i])
	{
		j = 0;
		while (src[i][j])
			j ++;
		write(1, src[i], j);
		write(1, &c, 1);
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort_string_tab(argv + 1);
	ft_putstr(argv + 1);
	return (0);
}*/