/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 19:08:31 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 19:35:50 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void		conversion(const char *format, int i, t_lst *tmp)
{
	if (format[i] == 's')
		tmp->type = 1;
	else if (format[i] == 'S')
		tmp->type = 2;
	else if (format[i] == 'p')
		tmp->type = 3;
	else if (format[i] == 'd')
		tmp->type = 4;
	else if (format[i] == 'D')
		tmp->type = 5;
	else if (format[i] == 'i')
		tmp->type = 6;
	else if (format[i] == 'o')
		tmp->type = 7;
	else if (format[i] == 'O')
		tmp->type = 8;
	else if (format[i] == 'u')
		tmp->type = 9;
	else if (format[i] == 'U')
		tmp->type = 10;
	else if (format[i] == 'x')
		tmp->type = 11;
	else if (format[i] == 'X')
		tmp->type = 12;
	else if (format[i] == 'c')
		tmp->type = 13;
	else if (format[i] == 'C')
		tmp->type = 14;
}

int				save_type(const char *format, int i, t_lst *tmp)
{
	if (format[i] == 's' || format[i] == 'S' || format[i] == 'p' ||
		format[i] == 'd' || format[i] == 'D' || format[i] == 'i' ||
		format[i] == 'o' || format[i] == 'O' || format[i] == 'u' ||
		format[i] == 'U' || format[i] == 'x' || format[i] == 'X' ||
		format[i] == 'c' || format[i] == 'C')
	{
		conversion(format, i, tmp);
		i++;
	}
	else if (format[i] == '%')
	{
		tmp->pourc = 1;
		i++;
	}
	else
		tmp->type = 0;
	return (i);
}
