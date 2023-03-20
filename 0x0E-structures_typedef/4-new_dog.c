#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Description: store a copy of the name and owner
 * Return: Null if funcion fails
 * otherwise, the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);

	pup->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}

	pup->name = _strcopy(pup->name, name);
	pup->age = age;
	pup->owner = _strcopy(pup->owner, owner);

	return (pup);
}
