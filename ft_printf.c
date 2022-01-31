/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:24:35 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/31 18:48:45 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

bool	is_upper(const char c)
{
	if (c >= 65 && c <= 90)
		return (true);
	else
		return (false);
}

int	print_char(va_list param)
{
	char	buffer;

	buffer = va_arg(param, int);
	ft_putchar_void(buffer);
	return (1);
}

int	num_len(int num)
{
	int	cont;

	cont = 0;
	while (num != 0)
	{
		num = num / 10;
		cont++;
	}
	return (cont);
}

int	flags(const char c, va_list param)
{
	if (c == 'c')
		return (print_char(param));
	else if (c == 's')
		return (ft_putstr(va_arg(param, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(param, unsigned long long)));
	else if (c == 'd')
		return (ft_printnbr(va_arg(param, int)));
	else if (c == 'i')
		return (ft_printnbr(va_arg(param, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(param, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(param, unsigned int), c));
	else if (c == '%')
		return (ft_putchar_int('%'));
	else if (is_upper(c))
		return (ft_putchar_int('%'));
	else
		return (0);
}

int	ft_printf(char *a, ...)
{
	va_list	params;
	int		i;
	int		count;

	va_start(params, a);
	i = 0;
	count = 0;
	while (a[i])
	{
		if (a[i] == '%')
		{
			count += flags(a[++i], params);
			i++;
			continue ;
		}
		else
			count++;
		ft_putchar_void(a[i]);
		i++;
	}
	return (count + 1);
}
