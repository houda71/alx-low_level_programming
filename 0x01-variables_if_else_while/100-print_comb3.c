#include <stdio.h>

/**
 * main - The program prints all possible different combinations of two digits.
 *
 * Descryption:"Numbers are separated by , and followed by a space.
 * The two digits are different. 01 and 10 are considered the same
 * combination of the two digits 0 and 1.
 * Only the smallest combination of two digits will printed.
 * Only putchar will used to output."
 * Return: 0 for success
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}




