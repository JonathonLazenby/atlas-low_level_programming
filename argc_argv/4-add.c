#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - concatenates two strings,
 *
 *@s: memory
 *
 *@b: byte
 *
 *@n: bytes entred
 * Return: to dest
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;

	for ( i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j] != '\0'; ++j)
		{
			if (!isdigit (argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atio(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
