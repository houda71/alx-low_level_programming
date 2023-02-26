#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size:  is the size of the triangle.
 */
void print_triangle(int size)
{
	int row, ch, space;

	for (row = 1; row <= size; row++)
	{
		for (space = 0; space < size - row; space++)
			_putchar(' ');

		for (ch = 0; ch < row; ch++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
