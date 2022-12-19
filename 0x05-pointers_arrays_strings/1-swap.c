#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
