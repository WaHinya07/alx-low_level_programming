#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function frees previously allocated memory
 * for 2D array
 * @grid: 2D array to be freed
 * @height: Height of the 2D array
 */
void free_grid(int **grid, int height)
{
	int i_row;

	for (i_row = 0; i_row < height; i_row++)
	{
		free(grid[i_row]);
	}
	free(grid);
}
