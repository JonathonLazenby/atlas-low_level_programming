#include<stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 *
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 *
 * @dest: destination.
 *
 * @src: source
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	for (length =0; (length >= 0 && *(src + length) != '\0') ; length++ )
	{
		*(dest + length) = *(src + length);
	}
	return (dest);
}
