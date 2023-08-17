#include "variadic_functions.h"
#include <stdio.h>

/**
 * func_char - check the code
 *
 * @separator: argument passed to function
 * @ptr: the count of arguments passed
 *
 * Return: Always 0.
 */
void func_char (char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * func_float - check the code
 *
 * @separator: argument passed to function
 * @ptr: the count of arguments passed
 *
 * Return: Always 0.
 */
void func_float (char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * func_string - check the code
 *
 * @separator: argument passed to function
 * @ptr: the count of arguments passed
 *
 * Return: Always 0.
 */
void func_string(char *separator, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	if (str)
	{
	printf("%s%s", separator, str);
	return;
	}
	printf("%s(nil)", separator);
}

/**
 * func_int - check the code
 *
 * @separator: argument passed to function
 * @ptr: the count of arguments passed
 *
 * Return: Always 0.
 */

void func_int (char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * print_all - check the code
 *
 * @format: argument passed to function
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int z = 0;
	char *separator;
	va_list ptr;
	func_t functions[] = {
		{"c", func_char},
		{"i", func_int},
		{"f", func_float},
		{"s", func_string},
		{NULL, NULL}
	};

	va_start(ptr, format);
	separator = "";
	while (format && format[i])
	{
		z = 0;
		while (functions[z].format_ch)
		{
			if (format[i] == functions[z].format_ch[0])
			{
				functions[z].func(separator, ptr);
				separator = ", ";
			}
			z++;
		}
		i++;
	}
	va_end(ptr);
	printf("\n");
}
