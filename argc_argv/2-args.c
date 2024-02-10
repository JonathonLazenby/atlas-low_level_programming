#include "main.h"
#include <stdio.h>
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
	int i;
	
	for(i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
