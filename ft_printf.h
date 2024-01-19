/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoulin <gmoulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:56:02 by gmoulin           #+#    #+#             */
/*   Updated: 2024/01/12 19:30:20 by gmoulin          ###   ########.fr       */
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
int		ft_printf(const char *, ...);
void	ft_putchar(int c);

#endif
