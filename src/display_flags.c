#include "../includes/ft_printf.h"

int		flags_i(t_lst *tmp, va_list args, char *buff, int j)
{
	int		i;
	int		nb;
	char	*str;
	
	i = 0;
	//MUTE
	tmp->type = 6;
	nb = va_arg(args, int);
	str = ft_itoa(nb);
	while (str[i])
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	return(j);
}

int		flags_c(t_lst *tmp, va_list args, char *buff, int j)
{
	int	c;

	//MUTE 
	tmp->type = 13;
	c = va_arg(args, int);
	buff[j] = c;
	j++;
	return (j);
}
