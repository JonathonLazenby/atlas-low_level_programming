#include "main.h"
#include <stdio.h>
#include "dog.h"

/**
 * print_alphabet - print a to z
 *
 */

 void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n",d->name ? d->name : "nil");
		printf("Age: %.2f\n",d->age);
		printf("Owner: %s\n",d->owner ? d->owner : "nil");
	}
}
