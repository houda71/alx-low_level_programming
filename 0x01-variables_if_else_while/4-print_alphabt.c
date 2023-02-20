#include <stdio.h>

/**
 * main -  Outout all alphabet  except q and e in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
