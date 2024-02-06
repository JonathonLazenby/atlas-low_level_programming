#include "main.h"
/**
 * _memset - concatenates two strings,
 *
 *@s: memory
 *
 *@b: byte
 *
 *@n: bytes entred
 * Return: to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (original_s);
}
