#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to capatalize.
 *
 * Return: the new string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (str[i] < 'a' || str[i] > 'z')
			i++;

		if (i == 0 ||
			str[i - 1] == ' ' ||
			str[i - 1] == '.' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '"' ||
			str[i - 1] == '?' ||
			str[i - 1] == '!' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n')
			str[i] -= 32;

		i++;
	}

	return (str);
}
