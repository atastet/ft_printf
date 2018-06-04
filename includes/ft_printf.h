/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:51:08 by atastet           #+#    #+#             */
/*   Updated: 2018/06/04 16:10:43 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BUFF_SIZE 4096

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct		s_lst
{
	char			type;
	int				plus;
	int				minus;
	int				zero;
	int				hash;
	int				space;
	int				hh;
	int				h;
	int				l;
	int				ll;
	int				z;
	int				j;
	int				prec;
	int				champ;
	int				len;
	int				pourc;
	struct s_lst	*next;
}					t_lst;

int		ft_printf(const char *format, ...);
int		save_flags(const char *format, int i, t_lst *tmp);

#endif
