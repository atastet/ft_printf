#include "../includes/ft_printf.h"

int	main()
{
	int i;
	int j;
	char c;
	char str[18] = "[Anthony TASTET]\0";
	char dol;

	dol = '$';
	c = 'A';
	i = -5556667;
	j = 42;
	ft_printf("Hello %0+-#s %+i hello %hh+d %% %c [% i] %c %% \n",str, j, j, c, j, dol);
	return(0);
}
