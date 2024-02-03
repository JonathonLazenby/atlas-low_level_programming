#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	
	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
