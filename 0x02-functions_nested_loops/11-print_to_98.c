#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Pints all natural numbers from n to 98, followed by new line.
 * @n: the first number and it will passed to the function.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
		}
	}

	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}

	printf("\n");
}
