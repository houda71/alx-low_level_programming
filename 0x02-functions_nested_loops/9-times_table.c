#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x, y, digit1, digit2;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			/* Dont add space before the first column */
			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');

				/**
				 * Add another space if printed number
				 * is single digit.
				 */
				if ((x * y) < 10)
					_putchar(' ');
			}

			digit2 = (x * y) % 10;
			digit1 = (x * y) / 10;

			if ((x * y) > 9)
				_putchar(digit1 + '0');

			_putchar(digit2 + '0');
		}

		_putchar('\n');
	}
}
