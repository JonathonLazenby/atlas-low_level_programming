#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

char *string_toupper(char *str)
{
	char *original_str = str;
	
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return original_str
}
