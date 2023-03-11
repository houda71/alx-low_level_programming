# include "main.h"

/**
 * _memcpy -  copies memory area.
 * @src: pointer to array of memory areas.
 * @n: number of bytes to copie from src array.
 * @dest: the destnaion array to copie to.
 *
 * Discyption: The _memcpy() function copies n bytes from memory area
 * src to memory area dest.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
