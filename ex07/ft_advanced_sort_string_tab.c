/*int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}*/
void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		length;
	char	*tmp;
	int		j;
	int		k;

	length = 0;
	while (tab[length])
		length++;
	while (--length)
	{
		j = 0;
		while (++j < length)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
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
	ft_advanced_sort_string_tab(argv + 1, &ft_strcmp);
	ft_putstr(argv + 1);
	return (0);
}*/