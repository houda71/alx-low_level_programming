#include "main.h"

/**
 * _strstr - locates a substring.
 * @needle: pointer to substring to found.
 * @haystack: pointer to a string to search in.
 *
 * Discryption: finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (
					haystack[i] == needle[j] &&
					haystack[i + 1] != '0' &&
					haystack[i + 1] == needle[j + 1])

				return (&haystack[i]);
		}
	}

	return ('\0');
}
