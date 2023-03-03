#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1:pointer to the first string to compare.
 * @s2:pointer to the second string to compare.
 *
 * Return: the differance between the ASCII vlaiue of the first unmatched
 * character of the two srings:
 * Nagative value If s1 < s2.
 * 0 If s1 == s2.
 * Positive value If s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	return (s1[i] - s2[i]);
}
