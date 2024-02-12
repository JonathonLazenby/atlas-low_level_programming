#include "main.h"
#include <stdio.h>
/**
 * main - prints program name followed by a new line
 *
 *@argc: items
 *
 *@argv: name of programs
 *
 * Return: name
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
