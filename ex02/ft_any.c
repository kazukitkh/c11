/*int	ft_return(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] == 'a')
			return (0);
		i++;
	}
	return (1);
}*/
int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	argv[argc - 1] = 0;
	printf("%d", ft_any(argv + 1, &ft_return));
	return (0);
}*/