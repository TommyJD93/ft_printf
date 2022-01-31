/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:46:45 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/31 18:12:37 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
		print_length += write(1, "0", 1);
	else
	{
		num = ft_uitoa(n);
		print_length += ft_putstr(num);
		free(num);
	}
	return (print_length);
}

int	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}
/*
int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_print_hex(num, format);
	return (hex_len(num));
}*/

int	ft_print_ptr(unsigned long long num)
{
//	int	length;

//	length = 0;
//	length +=
	write(1, "0x", 2);
	if (num == 0)
		//length +=
		return(write(1, "0", 1));
	else
//	{
		ft_ptr_conv(num);
//		length += ft_ptr_len(num);
//	}
	return (ptr_len(num) + 2);
}