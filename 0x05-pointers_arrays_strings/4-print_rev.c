#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse, with new line at the end
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while(s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

