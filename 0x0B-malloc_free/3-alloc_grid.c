#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function
 * @width: parameter
 * @height: parameter
 * Return: NULL or pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	/* check width and height are valid */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for 2D array */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
		/* free previously allocated memory */
		for (y = 0; y < x; y++)
			free(grid[y]);
		free(grid);
		return (NULL);
		}
	}

	/* Initialize grid elements to 0 */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
