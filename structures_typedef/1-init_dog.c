#include "main.h"

/**
 * print_alphabet - print a to z
 *
 */

struct dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
