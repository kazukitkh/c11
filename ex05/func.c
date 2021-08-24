#include "do_op.h"

void	func_plus(int a, int b)
{
	ft_putnbr(a + b);
}

void	func_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	func_mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	func_div(int a, int b)
{
	if (!b)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	ft_putnbr(a / b);
}

void	func_mod(int a, int b)
{
	if (!b)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	ft_putnbr(a % b);
}
