#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string
 *
 * Return: none
 */
void rev_string(char *s)
{
	int length, i, j;
	char *ptr, temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	ptr = s;

	for (i = 0; i < (length - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(ptr + j);
			*(ptr + j) = *(ptr + (j - 1));
			*(ptr + (j - 1)) = temp;
		}
	}
}
