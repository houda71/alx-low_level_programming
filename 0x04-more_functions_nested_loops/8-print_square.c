#include "main.h"

/**
 * print_square - Prints a square using character #, followed by a new line.
 * @size:  is the size of the square.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size && size >= 0; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
