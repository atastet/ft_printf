/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 17:35:21 by atastet           #+#    #+#             */
/*   Updated: 2018/05/31 18:23:54 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int i;
	int neg;
	int pos;
	unsigned oct;

	oct = 1250;
	i = 0;
	neg = -5200;
	pos = 424242;
	//TEST FLAGS - + space # 0
	printf("Hello >>%d\n", i);
	printf("NEG classic >>%d\n", neg);
	printf("Double pourcentage >>%%%d\n", i);
	printf("+ with 0 >>%+d\n", i);
	printf("+ with neg >>%+d\n", neg);
	printf("+ with pos >>%+d\n", pos);
	printf("0 with 0 >>%0d\n", i);
	printf("0 with neg >>%0d\n", neg);
	printf("0 with pos >>%0d\n", pos);
	printf("Default  with 0 >>[%10d]\n", i);
	printf("Default  neg >>[%10d]\n", neg);
	printf("Default pos >>[%10d]\n", pos);
	printf("- with 0 >>[%-10d]\n", i);
	printf("- with neg >>[%-10d]\n", neg);
	printf("- with pos >>[%-10d]\n", pos);
	printf("# with unsigned oct >>%#x\n", oct);
	printf("space with 0 >>% d\n", i);
	printf("space with neg >>% d\n", neg);
	printf("space with pos >>% d\n", pos);
	return (0);	
}
