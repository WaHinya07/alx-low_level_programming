#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a 2D array of integers dynamically
 * using malloc
 * @width: size of the column grid
 * @height: size of the row grid
 * Description: Initialize each element to 0
 * Return: Pointer to the allocated memory of
 * 2D array
 * if height or width is <=0,Null,
 * if memory allocation fails, null
 */
int **alloc_grid(int width, int height)
{
	int * *twoDgrid;
	int i_row;
	int j_col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoDgrid = (int **) malloc(sizeof(int *) * height);

	if (twoDgrid == NULL)
	{
		return (NULL);
	}
	for (i_row = 0; i_row < height; i_row++)
	{
		twoDgrid[i_row] = (int *) malloc(sizeof(int) * width);

		if (twoDgrid[i_row] == NULL)
		{
			for (j_col = 0; j_col < width; j_col++)
			{
				free(twoDgrid[j_col]);
			}
			free(twoDgrid);

			return (NULL);
		}
	}
	return (twoDgrid);
}
