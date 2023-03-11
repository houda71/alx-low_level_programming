# include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to array of the addresses to fill.
 * @b: the character to fill.
 * @n: is the first bytes of the memory area pointed to by s to fill.
 *
 * Discyption: The _memset() function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
