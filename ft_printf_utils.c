/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:18 by gmoulin           #+#    #+#             */
/*   Updated: 2024/01/24 22:54:43 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_safe_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_safe_strlen(s)));
}

int	pnbase(long n, int baselength, char *base)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		n *= -1;
		length += ft_putchar('-');
	}
	if (n >= baselength)
		length += pnbase(n / baselength, baselength, base);
	return (length + ft_putchar(base[n % baselength]));
}

int	ft_print_ptr(unsigned long ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (pnbase(ptr, 16, "0123456789abcdef") + 2);
}
