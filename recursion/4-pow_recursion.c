#include "main.h"
/**
 * _pow_recursion - returns x to power of y
 *
 *@x: interger getting rasied to certain power
 *
 *@y: certain power
 *
 * Return: value of x being raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
