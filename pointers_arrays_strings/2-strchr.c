#include <stddef.h>
#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	return NULL;
}
