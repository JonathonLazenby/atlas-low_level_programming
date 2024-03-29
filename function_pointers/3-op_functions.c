#include "3-calc.h"
#include <stdlib.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}	
	
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (a % b);
}
