#include "main.h"
/**
 * _strcat - concatenates two strings,
 * Return: to  (dest)
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar("%c ", a[i][j]);
		}
		_putchar('\n');
	}
}
