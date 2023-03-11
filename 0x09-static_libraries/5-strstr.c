#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @needl: pointer to substring to found.
 * @haystack: pointer to a string to search in.
 *
 * Discryption: finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needl)
{
	char *str, *sub_str;

	while (*haystack != '\0')
	{
		str = haystack;
		sub_str = needl;

		while (*str == *sub_str && *sub_str != '\0')
		{
			str++;
			sub_str++;
		}

		if (*sub_str == '\0')
			return (haystack);

		haystack++;
	}


	return ('\0');
}
