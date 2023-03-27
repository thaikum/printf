#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

/**
 * struct type -a struct
 * @s: is string of modifiers
 * @fun: function pointer.
 */
struct type
{
	char *spec;
	int (*fun)(va_list pt);
};
typedef struct type specifier;

int _printf(const char *format, ...);
void _putchar(char c);
int mystring(va_list ptr);
int printch(va_list ptr);
int match(const char *s, specifier mod[], va_list ptr);
#endif
