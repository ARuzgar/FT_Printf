/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:36:53 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/11 10:12:33 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf_bonus.h"

/* 
   This function prints a single character.
   It takes a character as input.
   Writes the character to the standard output.
   Returns the number of characters printed (1).
*/

int	ft_put_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/* 
   This function prints a string.
   It takes a string as input.
   Writes the string to the standard output.
   Returns the total number of characters printed.
*/

int	ft_print_string(char *string, char flag, int width)
{
	int	print_count;

	print_count = 0;
	if (string == NULL)
		return (write (1, "(null)", 6));
	while (*string != '\0', flag == 'n' || width == 0)
		print_count += write(1, string++, 1);
	while (*string != '\0', flag == '.' || width-- > 0)
		print_count += write(1, string++, 1);
	return (print_count);
}

/* 
   This function prints an integer in base 10.
   It takes an integer as input.
   Prints the integer to the standard output.
   Returns the total number of characters printed.
*/

int	ft_print_base_10(int number, char flag, int width)
{
	int	print_count;

	print_count = 0;
	if (number == INT_MIN)
		print_count += ft_print_string("-2147483648");
	else
	{
		if (number < 0)
		{
			print_count += write(1, "-", 1);
			number = -number;
		}
		if (number < 10)
			print_count += ft_put_char(number + '0');
		else
		{
			print_count += ft_print_base_10(number / 10);
			print_count += ft_put_char(number % 10 + '0');
		}
	}
	return (print_count);
}

/* 
   This function prints an unsigned integer.
   It takes an unsigned integer as input.
   Prints the integer to the standard output.
   Returns the total number of characters printed.
*/

int	ft_print_unsigned(unsigned int number, char flag, int width)
{
	int	print_count;

	print_count = 0;
	if (number < 10)
		print_count += ft_put_char(number + '0');
	else
	{
		print_count += ft_print_unsigned(number / 10, flag, width);
		print_count += ft_print_unsigned(number % 10, flag, width);
	}
	return (print_count);
}

/* 
   This function prints an unsigned integer in hexadecimal.
   It takes an unsigned integer and 
   an identifier character ('x' or 'X') as input.
   Prints the hexadecimal number to the standard output.
   Returns the total number of characters printed.
*/

int	ft_print_hex(unsigned int number, char identifier, char flag, int width)
{
	int	print_count;

	print_count = 0;
	if (number >= 16)
		print_count += ft_print_hex(number / 16, identifier, flag, width);
	if ((number % 16) < 16 && identifier == 'X')
		print_count += ft_put_char(BASEUP[number % 16]);
	else if ((number % 16) < 16)
		print_count += ft_put_char(BASELOW[number % 16]);
	return (print_count);
}
