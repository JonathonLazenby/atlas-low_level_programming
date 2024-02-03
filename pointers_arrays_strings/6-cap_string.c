#include "main.h"
/**
 * string
 * 
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *str)
{
	int capNext = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' || *str == ';' || *str == '.' || *str == '!' || *str == '?' || *str == '"' || *str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			capNext = 1
		}
		else if (capNext && ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			*str = (*str >= 'a' && *str <= 'z') ? (*str - ('a' - 'A')) : *str;
			capNext = 0;
		}
		str++;
	}
	Return str;
}
