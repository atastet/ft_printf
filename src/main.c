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
	j = 5;
	ft_printf("Hello %0+-#s%0i hello %-hhd %% %+#hhc %-0#hhi%c%%\n",str, i, j, c, i, dol);
	return(0);
}
