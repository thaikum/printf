#include "main.h"
/**
 * string_preceded_by_spaces - creates a string of a specific width
 * preceded by spaces or 0 if for_precision is 1
 * @width: minimum width required
 * @str: the stringtoformat
 * @for_precision: flag that determine whether to fill with 0 or spaces
 *
 * Return: the formated string
 */
char *string_preceded_by_spaces(int width, char *str, int for_precision)
{
	int index, diff, len = string_size(str), counter = 0;
	char *new_string;

	if (width <= len)
	{
		return (str);
	}
	else
	{
		diff = width - len;
		new_string = malloc(width * sizeof(char));

		for (index = 0; index < diff; index++)
			if (for_precision)
				new_string[index] = '0';
			else
				new_string[index] = ' ';

		for (; index < width; index++, counter++)
			new_string[index] = str[counter];

		return (new_string);
	}
}

/**
 * string_succeeded_by_spaces - creates a string of a specific width
 * followed by spaces
 * @width: minimum width required
 * @str: the stringtoformat
 *
 * Return: the formated string
 */
char* string_succeeded_by_spaces(int width, char *str)
{
	int index, len = string_size(str);
	char *new_string;

	if (width <= len)
	{
		return (str);
	}
	else
	{
		new_string = malloc(width * sizeof(char));

		for (index = 0; str[index]; index++)
			new_string[index] = str[index];

		for (; index < width; index++)
			new_string[index] = ' ';

		return (new_string);
	}
}
