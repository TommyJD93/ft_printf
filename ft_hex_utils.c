/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:24:43 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/31 18:12:42 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int	hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	hex_conv(unsigned int num, const char format)
{
	if (num >= 16)
	{
		hex_conv(num / 16, format);
		hex_conv(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}*/

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}

/*
• %c Prints a single character. ✅
• %s Prints a string (as defined by the common C convention). ✅
• %p The void * pointer argument has to be printed in hexadecimal format. ✅
• %d Prints a decimal (base 10) number. ✅
• %i Prints an integer in base 10. ✅
• %u Prints an unsigned decimal (base 10) number. ✅
• %x Prints a number in hexadecimal (base 16) lowercase format. ✅
• %X Prints a number in hexadecimal (base 16) uppercase format. ✅
• %% Prints a percent sign. ✅
*/
// https://docs.microsoft.com/it-it/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170

// char -> substitute char -> remove %c -> convert the data into char -> substitute the data in the final string -> repete for each placeholder -> print the string -> 20 push easy
/*int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
		return (10);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}*/
