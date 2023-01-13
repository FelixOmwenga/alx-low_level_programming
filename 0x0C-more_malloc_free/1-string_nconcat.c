#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * @n: size of
  * Return: pointer to new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s[len] = s1[i];
		len++;
	}

	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		s[len] = s2[i];
		len++;
	}

	s[len] = '\0';

	return (s);
}
