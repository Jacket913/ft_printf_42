/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:28 by gmoulin           #+#    #+#             */
/*   Updated: 2024/01/12 19:29:11 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_format(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int));
}



int	ft_printf(const char *format, ...)
{
	int	i;
	va_list	args;

	va_start(args, format);
	i = 0;
	while(format[i])
	{
		if (format[i] == '%')
			check_format(format[++i], args);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
}
