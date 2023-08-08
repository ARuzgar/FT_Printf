/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:34:01 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/08 19:51:13 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

/* Macro Definitions */

# define CHAR_FLAG 'c'
# define STR_FLAG 's'
# define UNSIGNED_FLAG 'u'
# define PTR_FLAG 'p'
# define BASELOW "0123456789abcdef"
# define BASEUP "0123456789ABCDEF"

/* Function Prototypes */

int	ft_put_char(char c);
int	ft_print_string(char *string);
int	ft_print_base_10(int number);
int	ft_print_unsigned(unsigned int number);
int	ft_print_hex(unsigned int number, char identifier);

#endif
