#include "../includes/ft_printf.h"

int	main()
{
	int i;
	int j;
	char c;
	
	c = 'a';
	i = 10;
	j = 5;
	ft_printf("Hello %0-d%0i hello %-hhD %% %+#hhc %-0#hhx\n", i, j, i, c);
	return(0);
}
