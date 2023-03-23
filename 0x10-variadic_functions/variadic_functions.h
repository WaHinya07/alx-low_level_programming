#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * file - variadic_functions.h
 * Description: A header file that contains all prototypes
 * for the variadic functions, and _putchar prototype
 * @char: is the variable type
 * Return: result desired
 */
int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
