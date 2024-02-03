#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

char *leet(char *str)
{
	int length, i;
	int nums[], lowCase[], upCase[];

	lowCase = {97, 101, 111, 116, 108};
	upCase = {65, 69, 79, 84, 76};
	length = 0;
	nums = {52, 51, 48, 55, 49};

	while (*(str + length) != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (*(str + length) == lowCase[i] || *(str + length) == upCase[i])	
			{
				*(str + length) = nums[i];
				break;
			}
			i++;
		}
		length++;
	}

	return (str);
}
