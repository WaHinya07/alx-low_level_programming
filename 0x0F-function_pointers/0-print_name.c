#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - Function that prints a name
 * @name: Name to be printed
 * @f: Pointer to the function print_name
 * also used as an argument
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
