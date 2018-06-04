/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:49:58 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 14:55:22 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int		parse(const char *format, va_list args)
{
	int		i;
	t_lst	*lst;
	t_lst	*tmp;

	if ((lst = (t_lst *)malloc(sizeof(t_lst))) == NULL)
		return (0);
	tmp = lst;
	while (format[i])
	{
		if (format[i] == '%')
			i = save_flags(format, i, tmp);
		i++;
	}
	///LATER IT SHOULD RETURN THE NUMBER OF C PRINT
	return (0);
}

int				ft_printf(const char *format, ...)
{
	va_list args;
	int 	ret;

	va_start(args, format);
	ret = parse(format, args);
	va_end(args);
	return (ret);
}
