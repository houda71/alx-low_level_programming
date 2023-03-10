#include "main.h"

int helper(int num, int count);
int is_prime_number(int n);

/**
 * helper - check if num is a prime
 * @num: the number to check
 * @count: integer number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int helper(int num, int count)
{
	if (num % count == 0)
		return (0);

	if (count == num - 2)
		return (1);

	return (helper(num, count + 1));
}

/**
 * is_prime_number - check if the passed number is a prime number.
 * @n: the integer number to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int count = 2;

	if (n >= 2 && n <= 3)
		return (1);

	if (n <= 1)
		return (0);

	return (helper(n, count));
}
