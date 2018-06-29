/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:31:40 by atastet           #+#    #+#             */
/*   Updated: 2018/06/29 17:07:50 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main()
{
	int i;
	int j;
	char c;
	char str[18] = "[Anthony TASTET]\0";
	char dol;

	dol = '$';
	c = 'A';
	i = -5556667;
	j = 42;
	ft_printf("Hello %0+-#s %+i hello %hh+d %% %c [% i] %c %% \n",str, j, j, c, j, dol);
	ft_printf("\n\n>>>>>TEST MYPRINTF FORUM<<<<<<\n");
	return(0);
	ft_printf("4567 |%-10]5d| plip\n", 12);
	ft_printf("4567 |%10]5d| plip\n", 12);
	ft_printf("|%10.5d|\n", -12);
	ft_printf("|%10d|\n", -12);
	ft_printf("|%010d|\n", -12);
	ft_printf("|%-10.5d|\n", -12);
	ft_printf("|%-010.5d|\n", -12);
	printf("\n\n>>>>>TEST INTRA FORUM<<<<<<\n");
	printf("4567 |%-10]5d| plip\n", 12);
	printf("4567 |%10]5d| plip\n", 12);
	printf("|%10.5d|\n", -12);
	printf("|%10d|\n", -12);
	printf("|%010d|\n", -12);
	printf("|%-10.5d|\n", -12);
	printf("|%-010.5d|\n", -12);
}
