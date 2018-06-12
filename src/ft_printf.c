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

static t_lst			*parse_flags(const char *format)
{
	int		i;
	t_lst	*lst;
	t_lst	*tmp;

	lst = create_first();
	tmp = lst;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = save_flags(format, i, tmp);
			i = save_type(format, i, tmp);
			create_lst(tmp);
			tmp = tmp->next;
		}
		i++;
		//FREE TMP
	}
	free(tmp->next);
	return (lst);
}

static void	test_flags(t_lst *flags)
{
	int i;
	i = 0;
	t_lst	*tmp;
	
	tmp = flags;
	while (tmp->next)
	{
		printf("LST %d >> type = %d, plus %d, hash %d, minus = %d, zero = %d, h =%d,  hh = %d, %% = %d\n",i, tmp->type, tmp->plus, tmp->hash, tmp->minus, tmp->zero, tmp->h, tmp->hh, tmp->pourc);
		i++;
		tmp = tmp->next;
	}
}
int				ft_printf(const char *format, ...)
{
	va_list args;
	t_lst		*flags;

	va_start(args, format);
	flags = parse_flags(format);
	test_flags(flags);
	va_end(args);
	printf("%s\n", format);
	printf("END OF PRINTF");
	///LATER IT SHOULD RETURN THE NUMBER OF C PRINT
	return (0);
m
