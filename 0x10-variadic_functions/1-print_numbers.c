#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - check the code
 *
 * @separator: argument passed to function
 * @n: the count of arguments passed
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	if (n)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i != (n - 1) && separator)
			printf("%s", separator);
		}
		printf("\n");
	}
}
