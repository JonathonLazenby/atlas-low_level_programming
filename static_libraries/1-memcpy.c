#include "main.h"
/**
 * _memcpy - copies memory
 *
 * @dest: dest mem area
 *
 *@src: source area
 *
 *@n: bytes
 * Return: to  (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (original_dest);
}
