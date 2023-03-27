#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	_printf("Length:[%d, %i]\n", len, len2);

	len = _printf("Negative:[%d]\n", INT_MAX);
        len2 = printf("Negative:[%d]\n", INT_MAX);
        _printf("Length:[%d, %i]\n", len, len2);

	len = _printf("Character:[%c]\n", '\0');
	len2 = printf("Character:[%c]\n", '\0');
	printf("Length:[%d, %i]\n", len, len2);

	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %i]\n", len, len2);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
