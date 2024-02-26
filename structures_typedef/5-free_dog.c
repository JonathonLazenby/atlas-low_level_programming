#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *@d: what gets freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
