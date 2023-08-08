/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:33:12 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/08 19:26:08 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_printf(const char *string, ...)
{
	int		print_count;
	int		i;
	va_list	argument;

	i = 0;
	print_count = 0;
	va_start (argument, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
			print_count += parse(&argument, string[++i]);
		else
			print_count += ft_put_char(string[i]);
		i++;
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