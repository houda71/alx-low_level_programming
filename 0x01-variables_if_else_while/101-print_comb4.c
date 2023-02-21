#include <stdio.h>

/**
 * main - Program prints all possible different combinations of three digits.
 *
 * Descryption:"Numbers are separated by , and followed by a space.
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * of the three digits 0, 1 and 2.
 * The three digits are different.
 * Only the smallest combination of two digits will printed.
 * Only putchar will used to output."
 * Return: 0 for success
 */
int main(void)
{
	int i, j, z;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (z = 48; z < 58; z++)
			{
				if (i < j && j < z)
				{
					putchar(i);
					putchar(j);
					putchar(z);

					if (i != 55 || j != 56 || z != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
