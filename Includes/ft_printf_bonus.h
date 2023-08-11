/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:34:01 by aerbosna          #+#    #+#             */
/*   Updated: 2023/08/11 11:30:18 by aerbosna         ###   ########.fr       */
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

/*
To Handle : 
	Left Justify Flag (-) 
		Left-justifies the output within the specified field width.
	Padding Zero Flag (0)
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


/* ----- Function Prototypes ----- */

/* ft_printf_bonus.c */

int	ft_printf(const char *string, ...);
int	parse(va_list *arg, char identifier, char flag, int width);
int	flag_check(va_list *arg, char *string);

/* ft_printf_bonus_utils.c */

int	ft_put_char(char c);
int	ft_print_string(char *string, char flag, int width);
int	ft_print_base_10(int number, char flag, int width);
int	ft_print_unsigned(unsigned int number, char flag, int width);
int	ft_print_hex(unsigned int number, char identifier, char flag, int width);


/* ft_printf_bonus_utils2.c */

int	minus_flag(va_list *arg, char *string);
int	zero_flag(va_list *arg, char *string);
int	dot_flag(va_list *arg, char *string);
int	sharp_flag(va_list *arg, char *string);
int	space_flag(va_list *arg, char *string);

/* ft_printf_bonus_utils3.c */

int	is_mandatory_flag(char flag);
int	plus_flag();


#endif
