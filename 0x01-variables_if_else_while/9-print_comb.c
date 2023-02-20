#include <stdio.h>

/**
 * main - The program prints all possible combinations of single-digit numbers.
 * Numbers must be separated by , followed by a space. Useing only putcar.
 *
 * Return: 0 for success
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
