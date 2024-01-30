#include "main.h"

/**
 * _atoi - turns a string to int
 *
 * @s: string
 *
 * Return: ints
 *
 */

int _atoi(char *s)
{
	unsigned int length = 0, size = 0, at = 0, ptr = 1, m = 1, i;

	while (*(s + length) != '\0')
	{
		if (size > 0 && (*(s + length) < '0' || *(s + length) > '9'))
			break;

		if (*(s + length) == '-')
			ptr *= -1;

		if ((*(s + length) >= '0') && (*(s + length) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		length++;
	}

	i = length - size;
	while (i < length)
	{
		at = at + ((*(s + i) - 48) * m);
		m /= 10;
		i++;
	}
	return (at * ptr);
}
