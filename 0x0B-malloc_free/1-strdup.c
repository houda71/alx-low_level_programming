#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the geven string
 *
 * Return: a pointer to the duplicated string. NULL otherwise.
 */
char *_strdup(char *str)
{
	char *string;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	string = malloc(len + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		string[i] = str[i];

	 string[i] = '\0';
	return (string);
}
