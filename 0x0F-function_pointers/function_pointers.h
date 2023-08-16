#ifndef FUNCTION_POINTERS_H
#define FUNTION_POINTER_H
#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));

#endif