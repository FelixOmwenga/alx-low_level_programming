#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an array of integers
  * @min: minimum element
  * @max: maximum element
  * Return: pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
