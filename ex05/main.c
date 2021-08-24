#include "do_op.h"

int	choose_func(char *str)
{
	if (!ft_strncmp(str, "+", 1))
		return (0);
	if (!ft_strncmp(str, "-", 1))
		return (1);
	if (!ft_strncmp(str, "/", 1))
		return (2);
	if (!ft_strncmp(str, "*", 1))
		return (3);
	if (!ft_strncmp(str, "%", 1))
		return (4);
	else
		return (-1);
}

int	main(int argc, char *argv[])
{
	void	(*f[5])(int, int);
	int		num_1;
	int		num_2;
	int		decide_opt;

	if (argc != 4)
		return (0);
	num_1 = ft_atoi(argv[1]);
	num_2 = ft_atoi(argv[3]);
	f[0] = func_plus;
	f[1] = func_minus;
	f[2] = func_div;
	f[3] = func_mult;
	f[4] = func_mod;
	decide_opt = choose_func(argv[2]);
	if (decide_opt < 0)
	{
		ft_putstr("0\n");
		return (0);
	}
	f[decide_opt](num_1, num_2);
	ft_putchar('\n');
	return (0);
}
