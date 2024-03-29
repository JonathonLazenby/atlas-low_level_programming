#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		
	}
	*dest = '\0';

	return original_dest;
}
