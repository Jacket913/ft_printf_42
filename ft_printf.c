/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:28 by gmoulin           #+#    #+#             */
/*   Updated: 2024/01/23 20:21:35 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char c, va_list args)
{
	if (c == 'c') //char
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's') //string
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p') //void *ptr in hexa
		return (ft_print_ptr(va_arg(args, void *)));
	else if (c == 'd') //decimal
		return (ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789"));
	else if (c == 'i') //int
		return (ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789"));
	else if (c == 'u') //unsigned decimal
		return (ft_putnbr_base(va_arg(args, unsigned int), 10, "0123456789"));
	else if (c == 'x') //hexa lowercase
		return (ft_putnbr_base(va_arg(args, unsigned int), 16, "0123456789abcdef"));
	else if (c == 'X') //hexa uppercase
		return (ft_putnbr_base(va_arg(args, unsigned int), 16, "0123456789ABCDEF"));
	else if (c == '%') //print '%'
		return (ft_putchar('%'));
}



int	ft_printf(const char *format, ...)
{
	int		i;
	int		length;
	va_list	args;

	if (!format)
		return (-1);
	va_start(args, format);
	length = 0;
	i = 0;
	while(format[i] != '\0')
	{
		if (format[i] == '%')
			length += check_format(format[++i], args);
		else
			length += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}

/*int main()
{
	ft_printf("the hex code for 42 is %x and in big hex it's %X.\n", 42, 42);
	printf("the hex code for 42 is %x and in big hex it's %X.\n", 42, 42);
}*/
