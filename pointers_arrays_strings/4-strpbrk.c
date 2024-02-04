#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

char *_strpbrk(char *s, char *accept);
{

	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				return s;
			}
			accept_ptr++;
		}
		s++;
	}
	return 0;

}
