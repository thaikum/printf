#include "main.h"
#include <stdarg.h>

/**
 * flags_handler - handles all flags
 * @str: the string to format with flags
 * @flag_struct: structure containing flags
 *
 * Return: number of characters printed
 */
char *flags_handler(char *str, type_flags flag_struct)
{
	if (flag_struct.width_flag)
	{
		if (flag_struct.hyphene_flag)
			str = string_succeeded_by_spaces(flag_struct.width,
							str);
		else
			str = string_preceded_by_spaces(flag_struct.width,
							str, 0);
	}
	if (flag_struct.precision_flag)
	{
		str = string_preceded_by_spaces(flag_struct.width, str, 1);
	}

	return (str);
}
