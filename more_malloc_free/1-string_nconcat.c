#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

#include "main.h"

/**
 * _strlen - Returns length of a string
 *
 *@s: a pointer
 *
 *Return: length of string
 *
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
} 

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

	for (length = 0; length >= 0; length++)
	{
		*(dest + length) = *(src + length);
		if (*(src + length) == '\0')
			break;
	}
	return (dest);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len_s1;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);

	result = (char *)malloc((len_s1 + n  +1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
