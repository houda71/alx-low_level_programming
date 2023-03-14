#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 *
 * Return: a pointer to a 2 dimensional array of integers.
 * return NULL if width or hight equal to zero or on failure.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	/* Allocate memory for the rows */
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	/* Allocate memory for the columns */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		/* Free up all previous memory allocations before returning NULL*/
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);

			return (NULL);
		}
	}

	/* Initialize all elements if the grid to 0*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
