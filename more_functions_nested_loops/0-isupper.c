#include "main.h"

/**
 * _isupper - tells if an ascii is a uppercase or not
 *
 * @c: a letter or something.
 *
 * Return: 1 if uppercase
 *         0 is uppercase
 */

int _isupper(int c)
{
	int a = 97;
	int z = 122;

	if (c >= A && c <= Z)
		return (1);
	else
		return (0);

}
