#include "main.h"
#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_alphabet - print a to z
 *
 */

 void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf(d->name ? d->name : "nil");
		printf(d->age);
		printf(d->owner ? d->owner : "nil");
	}
}
