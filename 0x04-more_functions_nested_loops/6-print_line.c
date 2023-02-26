#include "main.h"

/**
 * print_line - Draws a straight line of the character '_' in the terminal.
 * @n: the number of characters.
 */
void print_line(int n)
{
	int i = n;

	while (i > 0)
	{
		_putchar('_');

		i--;
	}
	_putchar('\n');
}

