#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *orginal_s = s;
	
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return original_s
}
