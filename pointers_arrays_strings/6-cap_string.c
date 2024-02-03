#include "main.h"
/**
 * string
 * 
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		if ((*(str + length) >= 97) && (*(str + length) <= 122))
			*(str + length) = *(str + length) - 32;
		length++;
	}

	return (str);
}
