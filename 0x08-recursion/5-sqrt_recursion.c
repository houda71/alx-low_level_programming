#include "main.h"

int _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt - return square root of n
 * @num: integer number
 * @root: the natural square root
 *
 * Return: the square root of n, or -1 if no natioral aqrt
 */

int _sqrt(int num, int root)
{
	if (num < 0 || root > num)
		return (-1);

	if (root * root == num)
		return (root);

	return (_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer number.
 *
 * Return: the square root of n.
 * If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	return (_sqrt(n, root));
}
