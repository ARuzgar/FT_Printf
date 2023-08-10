/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:33:12 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/10 14:05:20 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf_bonus.h"

/* 
	This function checks for flags and calls the corresponding function.
	It takes a va_list pointer(to prevent undef. behaviours)
	And a character identifier for flags. 
	It returns the total number of characters printed.
*/

int	flag_check(va_list *arg,char *string)
{
	int	print_count;
	int	i;
	
	print_count = 0;
	i = 0;
	if (string[i] == '-')
		print_count += minus_flag(arg, string[++i]);
	else if (string[i] == '0')
		print_count += zero_flag(arg, string[++i]);
	else if (string[i] == '.')
		print_count += precision_flag(arg, string[++i]);
	else if (string[i] == '#')
		print_count += sharp_flag(arg, string[++i]);
	else if (string[i] == ' ')
		print_count += space_flag(arg, string[++i]);
	else if (string[i] == '+')
		print_count += plus_flag(arg, string[++i]);
	else if (string[i] == '*')
		print_count += width_flag(arg, string[++i]);
	else if (string[i] == 'c' || string[i] == 's' || string[i] == 'i'
		|| string[i] == 'd' || string[i] == 'u' || string[i] == 'x'
		|| string[i] == 'X' || string[i] == 'p' || string[i] == '%')
		print_count += parse(arg, string[i]);
	return (print_count);
}

/* 
   This function handles parsing of format specifiers.
   It takes a va_list pointer(to prevent undef. behaviours) 
   And an identifier character. It processes the identifier 
   And calls the corresponding function. 
   Returns the total number of characters printed.
*/

int	parse(va_list *arg, char identifier)
{
	int	print_count;

	print_count = 0;
	if (identifier == CHAR_FLAG)
		print_count += ft_put_char(va_arg(*arg, int));
	else if (identifier == STR_FLAG)
		print_count += ft_print_string(va_arg(*arg, char *));
	else if (identifier == 'i' || identifier == 'd')
		print_count += ft_print_base_10(va_arg(*arg, int));
	else if (identifier == UNSIGNED_FLAG)
		print_count += ft_print_unsigned(va_arg(*arg, unsigned int));
	else if (identifier == 'x' || identifier == 'X')
		print_count += ft_print_hex(va_arg(*arg, unsigned int), identifier);
	else if (identifier == '%')
		print_count += write(1, "%", 1);
	else if (identifier == PTR_FLAG)
	{
		print_count += write(1, "0x", 2);
		print_count += ft_print_hex(va_arg(*arg, unsigned int), identifier);
	}
	return (print_count);
}

/* 
   This is the main ft_printf function.
   It takes a format string and a variable number of arguments.
   It iterates through the format string and processes format specifiers.
   Returns the total number of characters printed.
*/

int	ft_printf(const char *string, ...)
{
	int		print_count;
	int		i;
	char	*str;
	va_list	argument;

	i = 0;
	print_count = 0;
	str = (char *)string;
	va_start (argument, str);
	while (string[i] != '\0')
	{
		str = (char *)string;
		if (string[i] == '%' && string[i + 1] != '\0')
			print_count += flag_check(&argument, ++str);
		else if (string[i] != '%')
			print_count += ft_put_char(str++);
		str++;
	}
	return (print_count);
}

/* int main()
{
    printf("Unit Testing ft_printf:\n\n");

    // Test characters
    ft_printf("Characters: %c %c\n", 'A', 'B');
    printf("Expected: Characters: A B\n\n");

    // Test integers and hexadecimal conversions
    ft_printf("Integers: %d %i %x %X\n", 123, -456, 255, 255);
    printf("Expected: Integers: 123 -456 ff FF\n\n");

    // Test strings and pointers
    ft_printf("Strings and Pointers: %s %p\n", "Hello", &main);
    printf("Expected: Strings and Pointers: Hello %p\n\n", &main);

    // Test percentage sign
    ft_printf("Percentage: %%\n");
    printf("Expected: Percentage: %%\n\n");

    // Test edge cases
    ft_printf("Edge Cases: %d %s %% %c\n", INT_MIN, NULL, 'Z');
    printf("Expected: Edge Cases: -2147483648 (null) %% Z\n\n");

    return 0;
}
 */