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

char *str_concat(char *s1, char *s2)
{
	size_t len_s1, len_s2;
	char* result;

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = (char*)malloc((len_s1 + len_s2 +1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
