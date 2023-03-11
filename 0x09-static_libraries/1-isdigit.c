#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The variable to check.
 *
 * Return: 1 if c is a digit. Returns 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	else
		return (0);
}

