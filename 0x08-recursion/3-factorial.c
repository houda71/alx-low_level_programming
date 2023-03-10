#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to calculate its factorial.
 *
 * Return: the factorial of n.
 * return -1 If n is lower than 0, to indicate an error
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	fact *= factorial(n - 1);


	return (fact);
}
