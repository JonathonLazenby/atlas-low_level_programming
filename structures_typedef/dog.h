#ifndef DOGHEADER
#define DOGHEADER

/**
 * struct dog- my structure
 *
 *@name: 1st
 *@age: 2nd
 *@owner: 3rd
 *
 * description - a dogs info
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
