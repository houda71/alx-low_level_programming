#include "main.h"

/**
 * int _abs - Computes the absolute value of a passed integer value.
 */
int _abs(int num)
{
	int abs = (0 - num);
	
	if (num > 0)
		abs = num;

	return (abs);
}
