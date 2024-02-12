#include "main.h"
#include <stdio.h>
/**
 * main - prints number of arguments passed
 *
 *@argv: items
 *
 *@argc: num of arguements
 *
 * Return: num of arguements
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
