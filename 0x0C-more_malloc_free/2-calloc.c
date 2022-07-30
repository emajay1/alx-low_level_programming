#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of element for an array to be allocated memory
 * @size: size in byte of each element to be allocated memory
 * Return: a pointer to the allocated memory all set to zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *cal;

	if (!nmemb || !size)
		return (NULL);

	cal = malloc(nmemb * size);

	if (!cal)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		cal[i] = 0;

	return (cal);
}
