#ifndef DOGHEADER
#define DOGHEADER

/**
 * malloc_checked- allocates memory using malloc
 *
 *@b: data
 *
 * Return: ptr
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
