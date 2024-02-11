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
	int A = 65;
	int Z = 90;

	if (c >= A && c <= Z)
		return (1);
	else
		return (0);

}
