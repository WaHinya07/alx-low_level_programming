#include "main.h"
/**
 * string_toupper - This function changes all lowercase letters to uppercase
 * @str: string to be modified
 * Return: changed string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
