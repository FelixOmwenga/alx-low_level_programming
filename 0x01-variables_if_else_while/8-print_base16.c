#include <stdio.h>
/**
 *main - base 16 numbers
 *Return: 0
 */
int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
