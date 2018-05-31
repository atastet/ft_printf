/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:51:08 by atastet           #+#    #+#             */
/*   Updated: 2018/05/31 16:46:20 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BUF_SIZE 4096

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct		s_lst
{
	char			type;
	char			*prt;
	struct s_lst	*next;
}					t_lst;

void		ft_printf(const char *format, ...);

#endif
