#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - A new struct type defining our print
 * @symbol: Our symbol representing the data type
 * @print_func: a function pointer that prints
 */
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;
#endif /** VARIADIC_FUNCTIONS_H */
