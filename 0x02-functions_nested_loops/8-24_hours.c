#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int i,j,z,k;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 2 && j == 4)
				break;

			for (z = 0; z <= 5; z++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(k + '0');
					_putchar('\n');	
				}
			}
		}
	}
}
