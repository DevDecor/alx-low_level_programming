#ifndef _VARIADIC
#define _VARIADIC
#include <stdarg.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif
