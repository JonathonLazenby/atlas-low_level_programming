#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_alphabet - print a to z
 *
 */

#include "main.h"
/**
 * _strncpy - copies a string
 * Return: to  (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return original_dest;
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	newdog = (dog_t *)malloc(sizeof(dog_t));
	
	if (newdog != NULL)
	{
		_strncpy(newdog->name, name);
		_strncpy(newdog->owner, owner);
		newdog->age = age;
	}
	return (newdog);
	
}
