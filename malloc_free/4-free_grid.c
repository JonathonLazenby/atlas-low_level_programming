#include "main.h"
#include <stdlib.h>

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a newline using only _putchar.
 *
 * Return: Always 0
 *
 */

void free_grid(int **grid, int height);
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; ++i)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
