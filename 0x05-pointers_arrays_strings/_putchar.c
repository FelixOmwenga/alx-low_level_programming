#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes characters to stdout
 * @c: Character to print
 * Return: On success, 1.
 * On error: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
