#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @src: the string to append
 * @dest: the string to append to
 * @n: the number of bytes to append
 * Description: it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;

	if (n <= len_dest)
	{
		for (i = 0; i < n; i++)
			dest[len_dest++] = src[i];
	}
	else
	{
		for (i = 0; src[i]; i++)
			dest[len_dest++] = src[i];
	}

	return (dest);
}
