/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_bonus3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:21:57 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/10 16:48:14 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_printf_bonus.h"

int	plus_flag()
{
	int	print_count;

	print_count = 0;
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