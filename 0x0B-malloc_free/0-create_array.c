#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned integer to initialize the size of the array
 * @c: the char to initialize the array.
 *
 * Return: a pointer to the array, or NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
