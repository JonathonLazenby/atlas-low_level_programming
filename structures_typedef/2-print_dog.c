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
		printf("%s",d->name ? d->name : "nil");
		printf("%.2f",d->age);
		printf("%s",d->owner ? d->owner : "nil");
	}
}
