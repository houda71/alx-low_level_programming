#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * Dont print if 0 < n > 15.
 * @n: n_times_table
 */
void print_times_table(int n)
{
	int x, y, digit1, last_digit;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				digit1 = (x * y) / 10;
				last_digit = (x * y) % 10;

				if ((x * y) > 99)
				{
					_putchar((digit1 / 10) + '0');
					_putchar((digit1 % 10) + '0');
					last_digit = last_digit % 10;
				}
				if ((x * y) > 9 && (x * y) < 100)
					_putchar(digit1 + '0');

				_putchar(last_digit + '0');

				/* Don't print commas after the n'th column */
				if (y <= (n - 1))
				{
					_putchar(',');
					_putchar(' ');

					/* Add an extra two spaces */
					if (x * (y + 1) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (x * (y + 1) < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
