#include "main.h"

/**
 * _isdigit - tells if an ascii is a digit or not
 *
 * @c: a digit or something.
 *
 * Return: 1 if digit
 *         0 is not
 */

int _isdigit(int c)
{

        if (c >= 0 && c <= 9)
		return (1);
 	else
		return (0);

}
