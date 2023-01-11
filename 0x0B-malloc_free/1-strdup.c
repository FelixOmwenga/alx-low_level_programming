#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to return a pointer to newly allocated space in memory
 * @str: string parameter
 * Return: NULL if str = NULL, On success: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dup_str[j] = str[j];

	return (dup_str);
}
