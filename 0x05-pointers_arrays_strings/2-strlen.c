#include "main.h"

/**
 * _strlen - return the length of a string
 *@s: the string
 *Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
