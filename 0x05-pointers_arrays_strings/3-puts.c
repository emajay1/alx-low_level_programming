#include "main.h"

/**
 * _puts - print a long string followed by a new line
 * @str: string
 * REturn: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar (str[i]);
		i++;
	}
	_putchar('\n');
}
