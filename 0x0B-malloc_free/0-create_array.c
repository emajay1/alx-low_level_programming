#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, \
 * and initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array
 * Return: NULL if size = 0 or if fails, a pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char  *ch;

	if (size == 0)
		return (NULL);
	ch = malloc(size * sizeof(char));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;
	return (ch);
}
