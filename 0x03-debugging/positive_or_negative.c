#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * positive_or_negative - tests whether a number is positive or negative
 */

void positive_or_negative(int n)
{
	/*
	 * srand(time(0));
	 * n = rand() - RAND_MAX / 2;
	 */
	n = -1;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
