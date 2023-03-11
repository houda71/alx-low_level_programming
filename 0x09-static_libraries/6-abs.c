#include "main.h"

/**
 * _abs - Computes the absolute value of a passed integer value.
 * @num: the number to calculate its absolute value.
 *
 * Return: the absolute value of num.
 */
int _abs(int num)
{
	int abs = (0 - num);

	if (num > 0)
		abs = num;

	return (abs);
}
