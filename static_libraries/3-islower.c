#include "main.h"

/**
 * print_alphabet - print a to z
 *
 */

int _islower(int c)
{
	int a = 97;
	int z = 122;

	if (c >= a && c <= z)
		return (1);
	else
		return (0);

}
