/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:17:03 by jacket            #+#    #+#             */
/*   Updated: 2024/01/03 19:17:43 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int	i;

	i = 0;
	while(input[i])
	{
		if (input[i] == '%')
			check_format(input[i + 1]);
		ft_putchar(input[i]);
		i++;
	}
}
