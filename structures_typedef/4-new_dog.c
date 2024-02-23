#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_alphabet - print a to z
 *
 */

#include<stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 *
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 *
 * @dest: destination.
 *
 * @src: source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	for (length = 0; length >= 0; length++)
	{
		*(dest + length) = *(src + length);
		if (*(src + length) == '\0')
			break;
	}
	return (dest);
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
		_strcpy(newdog->name, name);
		_strcpy(newdog->owner, owner);
		newdog->age = age;
	}
	return (newdog);
	
}
