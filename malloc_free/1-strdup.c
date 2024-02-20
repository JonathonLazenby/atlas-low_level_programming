#include "main.h"
#include <stdlib.h>
#include <string.h>
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

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	length = _strlen(str);

	duplicate = (char*)malloc((length +1)* sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	_strcpy(duplicate, str);

	return (duplicate);
}
