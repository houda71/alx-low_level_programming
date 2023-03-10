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
	if (root * root == num)
		return (root);

	if (root < 0)
		return (-1);

	return (_sqrt(num, root - 1));
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
	int root = n;

	return (_sqrt(n, root));
}
