#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse irs content.
 * @n: the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i, half, temp;

	half = (n + 1) / 2;
	i = 0;
	while (half--)
	{
		n--;

		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
	}
}
