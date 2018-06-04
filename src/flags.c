/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:23:15 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 16:10:37 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

void	new_lst()
{

}

int		save_flags(const char *format, int i, t_lst *tmp)
{
	i++;

	if (format[i] == '+' || format[i] == '-' || format[i] == '0' || 
		format[i] == '#' || format[i] == ' ')
		first_flags(
}


//sSpdDioOuUxXcC
