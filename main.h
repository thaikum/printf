#ifndef MAIN_H
#define MAIN_H
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
int _printf(const char *format, ...);
void _putchar(char c);
void print_number(int num, int *len);
type_cont type_checker(char *str);
#endif
