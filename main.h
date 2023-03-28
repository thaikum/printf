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
	char *(*fun)(va_list ap);
	int precision_flag:
	int width_flag;
	int precision_count;
} type_flags;


/**
 * struct type -a struct
 * @spec: is modifier character e.g c, d, i, s, etc
 * @fun: function pointer to the function to execute the print functionality.
 * @steps: steps for the typechecker *shouldnt be here though
 */
typedef struct type
{
	char spec;
	char *(*fun)(va_list pt);
} specifier;


int _printf(const char *format, ...);

void _putchar(char c);

int print_string(va_list ptr);
int printch(va_list ptr);
int print_integer(va_list ap);

void print_number(long number, int *len);
specifier type_checker(const char *);
int match(const char *s, va_list ptr);

void *alloc_init(int size);
void int_to_str(long num, char *str,int *cur_ind);
int string_size(char *str);
char *reverse_string(char *str);
char *to_str(long num);
char *_puts(char *str);
int print_preceded_by_spaces(int spaces, char *str, int for_precision);
int print_suceeded_by_spaces(int spaces, char *str);
char *rot13(char *str);
#endif
