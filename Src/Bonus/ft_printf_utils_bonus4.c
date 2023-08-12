#include "../../Includes/ft_printf_bonus.h"

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
