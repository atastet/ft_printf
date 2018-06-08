/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 18:25:11 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 19:35:32 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_lst	*create_lst(void)
{
	t_lst *new;
	
	if((new = (t_lst *)malloc(sizeof(t_lst))) == NULL)
		return (NULL);
	new->next = NULL;
	new->type = 0;
	new->plus = 0;
	new->minus = 0;
	new->zero = 0;
	new->hash = 0;
	new->space = 0;
	new->hh = 0;
	new->h = 0;
	new->l = 0;
	new->ll = 0;
	new->z = 0;
	new->j = 0;
	new->prec = 0;
	new->champ = 0;
	new->pourc = 0;
	new->len = 0;
	return (new);
}
