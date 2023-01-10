#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - free a previously allocated grid
* @grid: pointer to grid
* @height: the grid height
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
