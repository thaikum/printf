#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct type_cont - a type that has steps and data type modifier
 * @steps: steps taken to reach the type modifier
 * @modifier: the modifier itself
 */
typedef struct type_cont
{
	int steps;
	char modifier;
} type_cont;


/**
 * struct type -a struct
 * @spec: is modifier character e.g c, d, i, s, etc
 * @fun: function pointer to the function to execute the print functionality.
 * @steps: steps for the typechecker *shouldnt be here though
 */
typedef struct type
{
	char spec;
	int (*fun)(va_list pt);
	int steps;
} specifier;


int _printf(const char *format, ...);

void _putchar(char c);

int print_string(va_list ptr);
int printch(va_list ptr);
int print_integer(va_list ap);
int int_to_binary(va_list list);
int printoct(va_list list);
int print_heX(va_list ptr);
int print_hexalower(va_list ptr);
int printadd(va_list ptr);
int print_UNS(va_list ptr);

int print_unsgined_number(unsigned int n);
void print_number(int number, int *len);
specifier type_checker(const char *);
int match(const char *s, va_list ptr);
int base_len(unsigned int n, unsigned int base);
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *s);
#endif
