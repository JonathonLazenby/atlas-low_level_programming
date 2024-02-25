#include "3-calc.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[i] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
