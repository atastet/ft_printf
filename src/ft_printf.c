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
	int		len;

	lst = create_first();
	tmp = lst;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = i;
			i = save_flags(format, i, tmp);
			i = save_type(format, i, tmp);
			tmp->len = i - len;
			create_lst(tmp);
			tmp = tmp->next;
		}
		if (format[i] != '%')
			i++;
	}
		//FREE TMP J'ai limpression de creer un maillon de trop
	free(tmp);
	return (lst);
}

//JUST TESTING FLAGS, TO DELETE
static void	test_flags(t_lst *flags)
{
	int i;
	i = 0;
	t_lst	*tmp;
	
	tmp = flags;
	while (tmp->next)
	{
		printf("LST %d >> len => %d space %d, plus %d, type = %d, plus %d, hash %d, minus = %d, zero = %d, h =%d,  hh = %d, %% = %d\n",i, tmp->len,tmp->space, tmp->plus, tmp->type, tmp->plus, tmp->hash, tmp->minus, tmp->zero, tmp->h, tmp->hh, tmp->pourc);
		i++;
		tmp = tmp->next;
	}
}

int				ft_printf(const char *format, ...)
{
	va_list args;
	t_lst		*flags;
	int		ret;

	ret = 0;
	va_start(args, format);
	flags = parse_flags(format);
	//TO DELETE JUSTE TO TEST flags
	test_flags(flags);
	ret = display(flags, args, format),
	va_end(args);
	printf("%s\n", format);
	printf("END OF PRINTF");
	///LATER IT SHOULD RETURN THE NUMBER OF C PRINT
	return (0);
}
