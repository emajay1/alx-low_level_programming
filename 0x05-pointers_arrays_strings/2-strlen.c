#include "main.h"

/**
 * _strlen - return the len of the string
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
