//int	func(char *);
int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	a;

	i = -1;
	a = 0;
	while (++i < length)
	{
		if (f(tab[i]))
			a++;
	}
	return (a);
}

/*int	func(char *tab)
{
	int	i;

	i = -1;
	while (tab[++i]);
	if (i % 2)
		return (0);
	return (1);
}

#include <stdio.h>
int	main(int argc , char *argv[])
{
	int	a;

	a = ft_count_if(argv + 1, argc - 1, &func);
	printf("%d", a);
	return (0);
}*/