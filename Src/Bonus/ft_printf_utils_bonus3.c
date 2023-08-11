/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:21:57 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/11 14:41:44 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf_bonus.h"

int	plus_flag()
{
	int	print_count;

	print_count = 0;
	if (i > 0 && i <= INT_MAX)
		print_count += write(1, "+", 1);
	print_count += ft_print_base_10(i);
	return (print_count);
}

int	is_mandatory_flag(char flag)
{
	if (flag == 'c' || flag == 's' || flag == 'i' || flag == 'd'
		|| flag == 'u' || flag == 'x' || flag == 'X' || flag == 'p'
		|| flag == '%')
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	width_count(char *string)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (is_digit(*string))
	{
		i = *string - '0';
		j = j * 10 + i;
		string++;
	}
	return (j);
}

int	print_width(int	width,char flag, char *string)
{
	int	print_count;

	print_count = 0;
	if (flag == '0')
	{
		while (width-- > 0)
			print_count += ft_put_char('0');
	}
	else if (flag == '-')
	{
		while (width-- > 0)
			print_count += ft_put_char(' ');
	}
	return (print_count);

}