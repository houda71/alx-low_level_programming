# include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer point to first integer
 * @b: pointer point to second integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;

	*b = *a;
	*a = tmp;
}
