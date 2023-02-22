#include "main.h"

/**
 * main - Prints _putchar, followed by a new line.
 *
 * Return: 0 for success.
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
		_putchar(ch[i]);

	_putchar('\n');

	return (0);
}
