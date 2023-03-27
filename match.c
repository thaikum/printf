#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * match - matches modifier to function
 * @s: string to be passed
 * @mod: is struct with modifier and functions
 * @ptr: is an argument pointeri
 * Return: return the number of character printed
 */
int match(const char *s, specifier mod[], va_list ptr)
{
	int i = 0, j = 0, l = 0, num = 0;

	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			_putchar(s[i]);
			l++;
		}
		else
		{
			while (mod[j].spec != NULL)
			{
				if (s[i + 1] == mod[j].spec[0])
				{
					num = mod[j].fun(ptr);
					l += num;
					i++;
					break;
				}
				j++;
			}
		if (mod[j].spec == NULL && s[i + 1] == ' ')
		{
			if (s[i + 1] != '\0')
			{
				_putchar('%');
				_putchar(s[i + 1]);
				l = l + 2;
				i++;
			}
			else
				return (-1);
		}
		}
	i++;
	}
	return (l);
}
