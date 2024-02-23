#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_alphabet - print a to z
 *
 */

char* my_strdup(const char* str)
{
    char *new_str, *q;
    int len = 0;
    const char* p = str;
    
    while (*p) {
        len++;
        p++;
    }
 
    new_str = (char*)malloc(len + 1);
    if (new_str == NULL) {
        return NULL;
    }
    
    q = new_str;
    p = str;
    while (*p) {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
    
    return new_str;
}

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
		newdog->name = my_strdup(name);
		newdog->owner = my_strdup(owner);
		newdog->age = age;
	}
	return (newdog);
	
}
