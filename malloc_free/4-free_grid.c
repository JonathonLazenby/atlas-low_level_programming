#include "main.h"
#include <stdlib.h>

/**
 * free_grid -frees a 2 demensional grid previsouly created
 *
 * @grid: addy of grid
 *
 *@height: hieght of grid
 *
 * return: nothing
 */

void free_grid(int **grid, int height)
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
