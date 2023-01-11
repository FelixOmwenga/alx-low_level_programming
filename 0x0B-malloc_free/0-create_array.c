#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size, initializes with char c
 * @size: size of array
 * @c: char array variable
 * Return: NULL if size = 0, pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	chars = malloc(sizeof(char) * size);

	if (size == 0 || chars == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chars[i] = c;

	return (chars);
}
