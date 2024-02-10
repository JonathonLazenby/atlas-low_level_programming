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
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	int result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
