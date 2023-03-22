#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter
 * If s does not match any of the 5 expected operators;+,-,*,/,%
 * give null result
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index;

	index = 0;
	while (ops[index].f != NULL)
	{
		if (*s == *(ops[index].op) && s[1] == '\0')
			return (ops[index].f);
		index++;
	}

	printf("Error\n");
	exit(99);
}
