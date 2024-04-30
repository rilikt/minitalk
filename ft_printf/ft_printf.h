/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:32:40 by timschmi          #+#    #+#             */
/*   Updated: 2024/04/19 13:02:24 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

extern int	ft_printf(const char *str, ...);
extern int	ft_putnbr(long int i);
extern int	ft_putunbr(unsigned int i);
extern int	ft_puthex(unsigned int hex);
extern int	ft_putupperhex(unsigned int hex);
extern int	ft_putstr(const char *str);
extern int	ft_putchar(const char c);
extern int	ft_checkset(const char *str);
extern int	ft_putptr(void *ptr);
extern int	ft_hexlen(unsigned long int hex);
extern int	ft_nbrlen(long int i);

#endif