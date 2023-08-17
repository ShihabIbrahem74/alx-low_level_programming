#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 *
 * @n: the count of arguments passed
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i, sum = 0;

	va_start(ptr, n);
	if (n)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ptr, int);
		}
		return (sum);
	}
	return (0);
}
