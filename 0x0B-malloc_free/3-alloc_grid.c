#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - function to return a 2d array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: a pointer to the 2d array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid_pointer;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_pointer = malloc(sizeof(int *) * height);

	if (grid_pointer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_pointer[i] = malloc(sizeof(int) * width);

		if (grid_pointer[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid_pointer[i]);

			free(grid_pointer);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid_pointer[i][j] = 0;
	}
	return (grid_pointer);
}
