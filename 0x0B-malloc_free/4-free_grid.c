#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function
 * @grid: paramater
 * @height: paramater
 * Return: 0 always
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
