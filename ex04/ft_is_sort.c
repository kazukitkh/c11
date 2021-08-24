//int	func(int, int);
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	count_1;
	int	count_2;

	i = 0;
	count_1 = 0;
	count_2 = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			count_1++;
		if (f(tab[i], tab[i + 1]) <= 0)
			count_2++;
		i++;
	}
	if (count_1 == length - 1 || count_2 == length - 1)
		return (1);
	return (0);
}

/*int	func(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	tab[5] = {4,3,2,1,0};
	
	printf("%d", ft_is_sort(tab, 6, &func));
	return (0);
}*/