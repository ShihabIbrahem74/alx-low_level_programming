#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - check the code
 *
 * @separator: argument passed to function
 * @n: the count of arguments passed
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *nil = "(nil)";
	char *str;
	   unsigned int i;

	va_start(ptr, n);
	if (n)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ptr, char*);
			printf("%s", str ? str : nil);
			if (i != (n - 1) && separator)
			printf("%s", separator);
		}
		printf("\n");
	}
}
