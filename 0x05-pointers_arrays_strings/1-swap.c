#include "main.h"

/**
 * swap_int - swaps two values
 * @a: first value to swap
 * @b: second value to swap
 * Return void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
