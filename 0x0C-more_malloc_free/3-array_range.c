#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: first value in array (included)
 * @max: last value in array (included)
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, m, *arr;

	/* macro - return NULL, if min > max */
	RETNULL(min > max);

	m = min;
	for (i = 1; m < max; i++)
		m++;

	arr = malloc(sizeof(*arr) * i);

	/* macro that returns NULL, if condition is true */
	/* if malloc fail, return NULL */
	RETNULL(arr == NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
