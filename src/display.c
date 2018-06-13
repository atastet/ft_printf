#include "../includes/ft_printf.h"

static	int	display_var(t_lst *tmp, va_list args, char *buff, int j)
{
	// ex : va_arg(args, int); DELETE IT
	(void)args;
	if (tmp->type != 0)
		buff[j] = '$';
	else if (tmp->pourc == 1)
		buff[j] = '%';
	j++;
	return (j);
}

int				display(t_lst *flags, va_list args, const char *format)
{
	char	buff[BUFF_SIZE + 1];
	int		i;
	int		j;
	t_lst	*tmp;
	
	tmp = flags;
	i = 0;
	j = 0;
	printf(">>test 1");
	while (format[i])
	{
		printf(">>test 1 and i = %d + j = %d\n", i, j);
		while (format[i] != '%' && format[i])
		{
			printf(">>test 2 and i = %d + j = %d\n", i, j);
			buff[j] = format[i];
			printf(">>test 3 and i = %d + j = %d\n", i, j);
			j++;
			i++;
		}
		if (format[i] == '%')
		{
			// NEED TO CREATE A STRUCT TO PASS LESS THAN 5 ARG solution could be a str_len
			printf(">>test 4 and i = %d + j = %d\n", i, j);
			j = display_var(tmp, args, buff, j);
			i += tmp->len - 1;
			tmp = tmp->next;
		}
		printf(">>test 5 and i = %d + j = %d\n", i, j);
		i++;
	}
	write(1, buff, j + 1);
	//free(tmp);
	//NEED TO WORK ON SOLUTION WHEN YOU ARE REACHING THE END OF BUFF
	return(j);
}
