#include "main.h"
#include "dog.h"

/**
 * print_alphabet - print a to z
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if ( d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
