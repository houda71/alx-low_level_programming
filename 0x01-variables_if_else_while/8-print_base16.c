#include <stdio.h>

/**
 * main - The program prints all the numbers of base 16 in lowercase,
 * followed by a new line. Using oly putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexnum;

	for (hexnum = 48; hexnum < 58; hexnum++)
		putchar(hexnum);
	for (hexnum = 97; hexnum <= 102; hexnum++)
		putchar(hexnum);

	putchar('\n');

	return (0);
}
