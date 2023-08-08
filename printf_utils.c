/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:36:53 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/08 18:19:42 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *string)
{
	int	print_count;

	print_count = 0;
	if (string == NULL)
		return (write (1, "(null)", 6));
	while (string != '\0')
		print_count += write(1, string++, 1);
	return (print_count);
}

int	print_base_10(int number)
{
	int	print_count;

	print_count = 0;
	if (number == INT_MIN)
		print_count += print_string("-2147483648");
	else
	{
		if (number < 0)
		{
			print_count += write(1, "-", 1);
			number = -number;
		}
		if (number < 10)
			print_count += write(1, (number + '0'), 1);
		else
		{
			print_count += print_base_10(number / 10);
			print_count += write(1, (number % 10 + '0'), 1);
		}
	}
	return (print_count);
}

int	print_unsigned(unsigned int number)
{
	int	print_count;

	print_count = 0;
	if (number < 10)
		print_count += write(1, (number + '0'), 1);
	else
	{
		print_count += print_unsigned(number / 10);
		print_count += write(1, (number % 10 + '0'), 1);
	}
	return (print_count);
}

int	print_hex(unsigned int number, char identifier)
{
	int	print_count;

	print_count = 0;
	if (number > 16)
		print_count += print_hex(number / 10, identifier);
	if (number <= 16 && identifier == 'X')
		print_count += write(1, (BASEUP[number % 16]), 1);
	else if (number <= 16)
		print_count += write(1, (BASELOW[number % 16]), 1);
	return (print_count);
}
