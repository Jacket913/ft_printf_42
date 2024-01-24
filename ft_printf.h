/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:02 by gmoulin           #+#    #+#             */
/*   Updated: 2024/01/24 22:54:34 by gmoulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* Libraries */
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

/* Functions */
int	ft_printf(const char *, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	pnbase(long n, int baselength, char *base);
int	ft_print_ptr(unsigned long ptr);

#endif
