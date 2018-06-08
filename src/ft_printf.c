/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:49:58 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 19:35:06 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		parse(const char *format, va_list args)
{
	int		i;
	t_lst	*lst;
	t_lst	*tmp;
	t_lst	*new;

	lst = create_lst();
	tmp = lst;
	i = 0;
	while (format[i])
	{
		printf("%s\n", format);
		if (format[i] == '%')
		{
			i = save_flags(format, i, tmp);
			i = save_type(format, i, tmp);
		}
		printf("type = %d, minus = %d, zero = %d\n", tmp->type, tmp->minus, tmp->zero);
		new = create_lst();
		tmp->next = new;
		tmp = tmp->next;
		free(new);
		i++;
	}
	///LATER IT SHOULD RETURN THE NUMBER OF C PRINT
	return (0);
}

int				ft_printf(const char *format, ...)
{
	va_list args;
	int		ret;

	va_start(args, format);
	ret = parse(format, args);
	va_end(args);
	printf("END OF PRINTF");
	return (ret);
}
