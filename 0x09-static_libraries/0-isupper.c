#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: The letter to check.
 *
 * Return: 1 if c is uppercase. Returns 0 otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	else
		return (0);
}
