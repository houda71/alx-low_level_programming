# include "main.h"

/**
 * print_last_digit - Prints the last digit of a passed number.
 * @num: the integer to check.
 *
 * Return: the value of thr last digit.
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (num < 0)
		last_digit = 0 - (num % 10);

	_putchar(last_digit + '0');

	return (last_digit);
}
