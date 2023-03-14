#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string to concatenates
 * @s2: string to concatenates
 *
 * Return: pointer to a newly allocated space in memory which contains
 * contents of s1, followed by the contents of s2, and null terminated
 * return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_s1 = 0, len_s2 = 0;
	int i = 0, j = 0;

	/* Calculate the length of s1*/
	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i]; i++)
		len_s1++;

	/* Calculate the length of s2*/
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i]; i++)
		len_s2++;

	str = malloc(len_s1 + len_s2);

	if (str == NULL)
		return (NULL);

	/* Add the content os s1 to str*/
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];

	/* Add the content os s2 to str*/
	for (j = 0; s2[j]; j++)
	{
		str[i] = s2[j];
		i++;
	}

	return (str);
}
