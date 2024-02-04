#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				length++;
				break;
			}
			accept_ptr++;
		}
		if (*accept_ptr == '\0')
			break;
		s++;
	}
	return length;

}
