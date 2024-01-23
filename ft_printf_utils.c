/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:18 by gmoulin           #+#    #+#             */
/*   Updated: 2024/01/23 20:22:20 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr_base(unsigned int n, unsigned int baselength, char *base)
{
	int	length;

	length = 0;
	if (n < 0)
	{
		n *= -1;
		length += ft_putchar('-');
	}
	if (n >= baselength)
		ft_putnbr_base(n / baselength, baselength, base);
	return (length += ft_putchar(base[n % baselength]));
}

/*int	ft_bintodec(void *ptr)
{
	size_t	aptr;
	size_t	i;
	size_t	remainder;
	size_t	res;

	aptr = &ptr;
	res = 0;
	i = 1;
	while (aptr > 0)
	{
		remainder = aptr % 10;
		res += remainder * i;
		aptr /= 10;
		i *= 2;
	}
	return (res);
}*/

int	ft_print_ptr(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return(ft_putnbr_base((unsigned long) ptr, 16, "0123456789abcdef") + 2);
}
