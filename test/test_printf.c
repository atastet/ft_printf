/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atastet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 17:35:21 by atastet           #+#    #+#             */
/*   Updated: 2018/06/29 16:54:44 by atastet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <wchar.h> 

int		main()
{
	int i;
	int neg;
	int pos;
	unsigned oct;
	int error;
	char buf[18] = "[Anthony TASTET]";
	int j;

	j  = 42;
	oct = 1250;
	i = 0;
	neg = -5200;
	pos = 424242;
	//TEST STR
	printf(">>>>>>>>>TEST STR \n");
	printf("Hello %0+#-s\n", buf);
	//TEST FLAGS - + space # 0
	printf(">>>>>>>>>TEST FLAGS - + space # 0\n");
	printf("Hello >>[% d]\n", i);
	printf("NEG classic >>[%d]\n", neg);
	printf("Double pourcentage >>[%%%d]\n", i);
	printf("+ with 0 >>[%+d]\n", i);
	printf("+ with neg >>[%+d]\n", neg);
	printf("+ with pos >>[%+d]\n", pos);
	printf("0 with 0 >>[%0d]\n", i);
	printf("0 with neg >>[%0d]\n", neg);
	printf("0 with pos >>[%0d]\n", pos);
	printf("Default  with 0 >>[%10d]\n", i);
	printf("Default  neg >>[%10d]\n", neg);
	printf("Default pos >>[%10d]\n", pos);
	printf("- with 0 >>[%-10d]\n", i);
	printf("- with neg >>[%-10d]\n", neg);
	printf("- with pos >>[%-10d]\n", pos);
	printf("# with unsigned oct >>[%#x]\n", oct);
	printf("space with 0 >>[% d]\n", i);
	printf("space with neg >>[% d]\n", neg);
	printf("space with pos >>[% d]\n", pos);
	//TEST return
	printf(">>>>>>>>>>>TEST RETURN \n");
	error = printf("test bad type [%u]\n", neg);
	printf("error = %d\n", error);
	error = printf("test ok type  [%d]\n", neg);
	printf("error = %d\n", error);
	error = printf("test c for i [%c]\n", neg);
	printf("error = [%d]\n", error);
	//TEST \0
	printf(">>>>>>>>>>>TEST BACKSLASH\n");
	error = printf("Test backslash [%d]\0 ca [%d] ////// continue ici\n", pos, neg);
	printf("\nerror = [%d]\n", error);
	//TEST .10
	printf(">>>>>>>>>>>.10 [%s]\n", buf);
	printf(".30 really  [%.30s]\n", buf);
	printf(".3 really  [%.3s]\n", buf);
	printf("10   [%10!]\n", buf);
	printf(".10 really on d  [%0.30d]\n", pos);
	printf(".10 after s [%s.10]\n", buf);
	//TEST FLAGS h hh ll l j z
	// TEST FLAGS PRIORITIES
	printf(">>>>>>>>>>>TEST FLAGS PRIORITIES\n");
	printf("Default  with 0 >>[%d.10]\n", i);
	printf("Default  with 0 >>[%d10]\n", i);
	printf(" Testing prio >>[%-10.10d]\n", neg);
	printf("Default  with 0 >>[%+-d]\n", neg);
	printf("- with neg >>[%.2d]\n", neg);
	printf("pourcentage %+101-------%bd djdjdj`\n", neg, pos);
	///LAST TEST 
	printf("LAST TEST\n");
	printf("%dd\n", j);
	printf(">>>%0d%0i\n", i, neg);
	printf("\n\n>>>>>TEST INTRA FORUM\n");
	printf("4567 |%-10]5d| plip\n", 12);
	printf("4567 |%10]5d| plip\n", 12);
	printf("|%10.5d|\n", -12);
	printf("|%10d|\n", -12);
	printf("|%010d|\n", -12); 
	printf("|%-10.5d|\n", -12);
	printf("|%-010.5d|\n", -12);
	return (0);
}
