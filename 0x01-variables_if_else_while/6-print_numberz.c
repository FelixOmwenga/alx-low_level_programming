#include <stdio.h>
/**
 *main - print 0 to 9 without using char, while not using char
 *Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
