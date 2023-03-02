#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: the string to print
 *
 * Descryption: The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int len, half;

	len = 0;
	while (str[len])
		len++;

	half = len / 2;
	if (len % 2 != 0)
		half = (len - 1) / 2;

	while (half <= len)
	{
		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
