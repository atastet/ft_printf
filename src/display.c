/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:30:44 by atastet           #+#    #+#             */
/*   Updated: 2018/06/29 16:48:18 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		flags_s(t_lst *tmp, va_list args, char *buff, int j)
{
	char	*str;
	int		i;

//DELETE IT
	tmp->type = 1;
	i = 0;
	str = va_arg(args, char *);
	while (str[i])
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	return (j);
}

static int		flags_d(t_lst *tmp, va_list args, char *buff, int j)
{
	int		i;
	int		nb;
	char	*str;

//MUTE
	i = 0;
	nb = va_arg(args, int);
	str = ft_itoa(nb);
	if (tmp->plus == 1 && nb >= 0)
	{
		buff[j] = '+';
		j++;
	}
	if (tmp->space == 1 & nb >= 0)
	{
		buff[j] = ' ';
		j++;
	}
	while (str[i])
	{
		buff[j] = str[i];
		i++;
		j++;
	}
	return (j);
}

static	int		display_var(t_lst *tmp, va_list args, char *buff, int j)
{
// ex : va_arg(args, int); DELETE IT
	if (tmp->type == 1)
		j = flags_s(tmp, args, buff, j);
	else if (tmp->type == 6)
		j = flags_i(tmp, args, buff, j);
	else if (tmp->type == 4)
		j = flags_d(tmp, args, buff, j);
	else if (tmp->type == 13)
		j = flags_c(tmp, args, buff, j);
	else if (tmp->type != 0)
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
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			buff[j] = format[i];
			j++;
			i++;
		}
		if (format[i] == '%')
		{
			// NEED TO CREATE A STRUCT TO PASS LESS THAN 5 ARG solution could be a str_l
			j = display_var(tmp, args, buff, j);
			i += tmp->len - 1;
			tmp = tmp->next;
		}
		i++;
	}
	write(1, buff, j + 1);
	//free(tmp);
	//NEED TO WORK ON SOLUTION WHEN YOU ARE REACHING THE END OF BUFF
	return (j);
}
