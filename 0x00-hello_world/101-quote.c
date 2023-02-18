#include <unistd.h>

/**
 *   main - Print a text
 *   Description: prints exactly and that piece of art is useful
 *   \" - Dora Korpar, 2015-10-19 by a new line, to the standard error
 *   Return: 1
 */
int main(void)
{
	/* write(file descriptor, message, length); */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
			, 59);

	return (1);
}
