#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 * Return: converted number
 */
void print_binary(unsigned long int n)
{
	unsigned long int b_num;
	
	b_num = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (b_num > 0)
	{
		if ((n & b_num) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		b_num >>= 1;
	}
}
