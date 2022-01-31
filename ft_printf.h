/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:55:51 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/31 18:13:29 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char *a, ...);
int		ft_print_unsigned(unsigned int n);
int		ft_putstr(char *str);
int		ft_printnbr(int n);
int		ft_putchar(char c);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_ptr(unsigned long long num);

int		flags(const char c, va_list param);

int		num_len(int num);

char	*ft_uitoa(unsigned int n);
int		ft_uprintnbr(unsigned int n);

//void	hex_conv(unsigned int num, const char format);
//int		hex_len(unsigned	int num);

int		ft_print_hex(unsigned int num, const char format);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned	int num);


int		ptr_len(unsigned long long num);
void	ft_ptr_conv(unsigned long long num);

void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int nb);
void	ft_putchar_void(char c);
int		ft_putchar_int(char c);
#endif
