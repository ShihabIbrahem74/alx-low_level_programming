#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct func  - a struct of chatacters and pointer to function
 * @format_ch: First member
 * @func: Second member
 *
 * Description: a struct of three members
 */
typedef struct func
{
char *format_ch;
void (*func)(char *, va_list);
} func_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
