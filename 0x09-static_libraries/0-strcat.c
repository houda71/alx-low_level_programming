#include "main.h"

/**
 * _strcat - appends the src string to the dest string.
 * @src: the string to append
 * @dest: the string to append to
 *
 * Description: overwriting the terminating null byte (\0) at the end
 * of dest, and then adds a terminating null byte
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len_dest;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
		;

	for (i = 0; src[i]; i++)
		dest[len_dest++] = src[i];

	return (dest);
}
