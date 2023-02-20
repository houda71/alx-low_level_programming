#include <stdio.h>

/**
 * main -  Outout the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 for success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
