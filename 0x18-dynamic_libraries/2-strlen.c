#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: length
 * Return: LEngth
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
