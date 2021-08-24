#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nm1);
int		ft_strncmp(char *str1, char *str2, unsigned int n);
void	func_plus(int nm1, int nm2);
void	func_minus(int nm1, int nm2);
void	func_div(int nm1, int nm2);
void	func_mult(int nm1, int nm2);
void	func_mod(int nm1, int nm2);
int		ft_atoi(char *str);
void	ft_nbs(int *n, char *str);
void	ft_putstr(char *str);
int		choose_func(char *str);

#endif