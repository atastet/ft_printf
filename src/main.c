#include "../includes/ft_printf.h"

int	main()
{
	int i;
	int j;

	i = 10;
	j = 5;
	ft_printf("Hello %-0d %0i \n", i, j);
	return(0);
}
