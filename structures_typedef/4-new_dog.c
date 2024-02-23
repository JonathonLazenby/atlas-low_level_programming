#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_alphabet - print a to z
 *
 */

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
		newdog->name = strdup(name);
		newdog->owner = strdup(owner);
		newdog->age = age;
	}
	return (newdog);
	
}
