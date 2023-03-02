#include "main.h"

/**
 * rev_string - reverses a string.
 *@s: the string to reverse
 */
void rev_string(char *s)
{
	int i, len, half;
	char  tmp;

	len = 0;
	while (s[len])
		len++;

	i = 0;
	half = len / 2;
	while (half--)
	{
		len--;

		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;

		i++;
	}
}
