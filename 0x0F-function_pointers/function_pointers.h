#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * File: function_pointers.h
 * Description: header file with prototypes for all functions
 * to be used for this project
 */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
