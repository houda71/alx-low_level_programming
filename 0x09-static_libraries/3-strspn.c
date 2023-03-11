#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to search through.
 * @accept: the substring to search.
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}

			else if (!(accept[i + 1]))
				return (n);
		}
		s++;
	}

	return (n);
}
