#include "../includes/ft_printf.h"

int	main()
{
	int i;
	int j;
	char c;
	char str[18] = "[Anthony TASTET]\0";
	c = 'a';
	i = 10;
	j = 5;
	ft_printf("Hello %0+-#s%0i hello %-hhD %% %+#hhc %-0#hhx\n",str, i, j, i, c);
	return(0);
}
