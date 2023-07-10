#include "main.h"
#include <stdlib.h>

/*
 * Task: 4. It's not bragging if you can back it up
 * Creator: Jared Naicker
 */

/**
  * free_grid - ...
  * @grid: ...
  * @height: ...
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
