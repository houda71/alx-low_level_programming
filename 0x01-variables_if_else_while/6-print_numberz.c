#include <stdio.h>

/**
 * main - The program prints all single digit numbers of base 10 starting
 * from 0, followed by a new line. With two conditions: using only putchar
 * and char type not allowable.
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	/* 48 to 58 represent numbers from 0 to 10 in ASCII*/
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
