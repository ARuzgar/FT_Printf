/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:34:01 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/10 12:23:17 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

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

/* ft_printf_bonus.c */

int	ft_printf(const char *string, ...);
int	parse(va_list *arg, char identifier);

/* printf_utils.c */

int	ft_put_char(char c);
int	ft_print_string(char *string);
int	ft_print_base_10(int number);
int	ft_print_unsigned(unsigned int number);
int	ft_print_hex(unsigned int number, char identifier);

/* printf_bonus_utils.c */

/*Flag Struct*/

/*
To Handle : 
	Left Justify Flag (-) 
		Left-justifies the output within the specified field width.
	Zero Flag (0)
		Pads the output with leading zeros within the specified field width.
	Precision Flag (.)
		Specifies precision: Limits the number of decimal places for strings.
	Prefix Flag (#)
		Adds a prefix to the output (e.g., 0x for hex, 0 for decimal)format. 
		//need to try with decimal and integer
	Space Flag ( )
		Inserts a space before the output if it's a positive signed conversersion.
	Positive Sign Flag (+)
		Inserts a plus sign before the output if it's a positive signed conversion.
*/

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	precision;
	int	sharp;
	int	space;
	int	plus;
	int	width;
}	t_flags;

#endif
