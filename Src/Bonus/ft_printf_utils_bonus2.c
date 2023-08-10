#include "../../Includes/ft_printf_bonus.h"

int	minus_flag(va_list *arg, char *string)
{
	int	i;
	int	j;
	int	print_count;

	i = 0;
	j = 0;
	print_count = 0;
	if (is_mandatory_flag(*(string + 1)))
		print_count += parse(arg, *(string + 1));
	else if (*(string + 1 ) != '\0')
		while (!is_mandatory_flag(*++string) && *string != '\0')
		{
			if (is_digit(*string))
			{
				i = *string - '0';
				j = j * 10 + i;
			}
		}
		
	return (print_count);
}

int	zero_flag(va_list *arg, char *string)
{
	int	print_count;

	print_count = 0;
	return (print_count);
}

int	precision_flag(va_list *arg, char *string)
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

int	space_flag(va_list *arg, char *string)
{
	int	print_count;

	print_count = 0;
	return (print_count);
}
