#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the destnation to append to it
 * @src: the source string to append
 * @n: size
 *
 * Discryptopn: copies the string pointed to by src, including the terminating
 * null byte ('\0'), to the buffer pointed to by dest.
 * Return: pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	for (len_src = 0; src[len_src]; len_src++)
		;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	 for (i = len_src; i < n; i++)
		 dest[i] = '\0';

	return (dest);
}
