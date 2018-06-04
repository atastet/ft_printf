/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:49:58 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 10:03:18 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		parse_first_time(char *format, args)
{


}

int		ft_printf(const char *format, ...)
{
	va_list args;
	int 	ret;

	va_start(args, format);
	ret = parse_first_time(format, args);
	va_end(args);
	return (ret);	
}

