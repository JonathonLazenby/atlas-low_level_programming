#include "main.h"
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

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	
	return 1 + _strlen_recursion(s + 1);
}
