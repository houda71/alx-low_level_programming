#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of the character '\' on the terminal.
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		_putchar('\\');
		_putchar('\n');

		for (j = 0; (j <= i) && (i < n - 1); j++)
			_putchar(' ');

		i++;
	}

	if (n <= 0)
		_putchar('\n');
}
