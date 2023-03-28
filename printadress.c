#include "main.h"

/**
 * printadd - prints the address
 * @ptr: comtaind list of arguments
 *
 * Return: length of string.
 */
int printadd(va_list ptr)
{
	char *c; int i;

	c = va_arg(ptr, char *);
	if (c == NULL)
		c = ("null");
	for (i = 0; c[i] != '\0'; i++)
	{
		
	}
	return(i);
}
