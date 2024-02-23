#ifndef DOGHEADER
#define DOGHEADER

/**
 * malloc_checked- allocates memory using malloc
 *
 *@b: data
 *
 * Return: ptr
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
