#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that copy string str to a newly allocated space memory
 * @str: string to be duplicated to new memory
 * Return: pointer to the new allocated memory, or NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i, len;
	char *dstr;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dstr = malloc(sizeof(char) * (len + 1));
	if (dstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dstr[i] = str[i];
	dstr[len] = '\0';
	return (dstr);
}
