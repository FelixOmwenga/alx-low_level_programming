#include <stdio.h>
/**
 *main - print the alphabet in lowercase using putchar
 *Return: 0
 */
int main(void)
{
	char x;

	/**
	 * while (x <= 'z')
	 *
	 *	putchar(x);
	 *	x++;
	 }*/
	for(x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
