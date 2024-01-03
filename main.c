/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:32:10 by jacket            #+#    #+#             */
/*   Updated: 2024/01/03 16:34:00 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main()
{
	int total = 0;
	/*
	total += ft_printf("char : %c, str : %s, pointer : %5p, number : %d, unumber : %u, hex : %x, #hex : %7x, space : |%    d|, plus : %+d, min_width : |%-5%|",
			'a',
			"Yo 42 !",
			0,
			-100,
			-5,
			-1,
			3735929054,
			64,
			+2,
			42
	);
	*/
	total += ft_printf(", string precision : %5s, num precision : %0014.2x",
			"-42",
			-1
	);
	total += ft_printf("\n%020.19x", 8000);
	total += ft_printf("\n%0014.2x %020x %00020.x %000.5x", -1, 3, 30, -1);
	printf("\ntotal : %d", total);

}
