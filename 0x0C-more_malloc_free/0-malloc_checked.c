#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function allocates memory using malloc
 * and checks whether memory has been allocated
 * Description: if malloc fails,function should cause normal termination
 * of process with a value of 98
 * @b: number of bytes to be allocated
 * Return: Pointer to the alocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mall_check = malloc(b);

	if (mall_check == NULL)
		exit(98);
	else
	{
		return (mall_check);
	}
}
