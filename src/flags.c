/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:23:15 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 19:34:25 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	void	first_flags(const char *format, int i, t_lst *tmp)
{
	if (format[i] == '+' || format[i] == '-' || format[i] == '0' ||
			format[i] == '#' || format[i] == ' ')
	{
		if (format[i] == '-')
			tmp->minus = 1;
		else if (format[i] == '+')
			tmp->plus = 1;
		else if (format[i] == '0')
			tmp->zero = 1;
		else if (format[i] == '#')
			tmp->hash = 1;
		else if (format[i] == ' ')
			tmp->space = 1;
		if (tmp->minus == 1)
			tmp->zero = 0;
	}
	return ;
}

static void		second_flags(const char *format, int i, t_lst *tmp)
{
	if (format[i] == 'h' || format[i] == 'l' || format[i] == 'z' ||
			format[i] == 'j')
	{
		if (format[i] == 'h' && format[i + 1] == 'h')
		{
			tmp->hh = 1;
			i++;
			return ;
		}
		else if (format[i] == 'l' && format[i + 1] == 'l')
		{
			tmp->ll = 1;
			i++;
			return ;
		}
		else if (format[i] == 'z')
			tmp->z = 1;
		else if (format[i] == 'j')
			tmp->l = 1;
		else if (format[i] == 'l')
			tmp->l = 1;
		else if (format[i] == 'h')
			tmp->h = 1;
	}
	return ;
}

int				save_flags(const char *format, int i, t_lst *tmp)
{
	i++;
	while (format[i] == '+' || format[i] == '-' || format[i] == '0' ||
			format[i] == '#' || format[i] == ' ' || format[i] == 'h' ||
			format[i] == 'l' || format[i] == 'z' || format[i] == 'j')
	{
		first_flags(format, i, tmp);
		second_flags(format, i, tmp);
		i++;
	}
	return (i);
}
