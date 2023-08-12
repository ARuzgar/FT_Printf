#include "../../Includes/ft_printf_bonus.h"

int	minus_flag(va_list *arg, char *string)
{
	int		i;
	int		width;
	int		print_count;
	bool	dot_flag;

	i = 0;
	width = 0;
	print_count = 0;
	dot_after_minus = false;
	if (is_mandatory_flag(*(string + 1)))
		print_count += parse(arg, *(string + 1));
	else if (*(string + 1 ) != '\0')
		
		while (!is_mandatory_flag(*++string) && *string != '\0')
		{
			if (is_digit(*string))
			{
				i = *string - '0';
				width = width * 10 + i;
			}
			else if (*string == '*')
				width = va_arg(*arg, int);
			else if (*string == '.')
			{
				dot_after_minus = true;
				break ;
			}
			else if (!is_mandatory_flag(*string) && *string != '\0' && is_printable(*string))

		}
	if (width <= 0 && dot_after_minus == false)
		print_count += parse(arg, *(string + 1));
	else if (width > 0 && dot_after_minus == false)
	{
		print_count += parse(arg, *(string + 1));
		while (width-- > 0)
			print_count += write(1, " ", 1);
	}
	else if (width <= 0 && dot_after_minus == true)
		print_count += dot_flag(arg, string);
	else
		print_count += minus_with_dot(arg, string, width);
	return (print_count);
}

int	zero_flag(va_list *arg, char *string)
{
	int	print_count;

	print_count = 0;
	return (print_count);
}

int	dot_flag(va_list *arg, char *string)
{
	int	print_count;

	print_count = 0;

	return (print_count);
}

int	sharp_flag(va_list *arg, char *string)
{
	int	print_count;

	print_count = 0;
	return (print_count);
}

int	space_flag(int i)
{
	int	print_count;

	print_count = 0;
	return (print_count);
}
