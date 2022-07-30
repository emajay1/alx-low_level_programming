#include <stdlib.h>
#include <string.h>
#define LEN(s) ((int) strlen(s))

/**
 * str_concat - A function that concatenates two strings
 * @s1: address of first string
 * @s2: address of second string
 * Return: pointer to memory that contains concat of both string \
 * followed by null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, length = 0, is1 = 0, is2 = 0;
	char *str;

	/* add length of string s1 to variable length if not NULL else 0 */
	is1 = ((s1 != NULL) ? LEN(s1) : 0);

	/* add length of string s2 to variable length if not NULL else 0 */
	is2 = ((s2 != NULL) ? LEN(s2) : 0);
	length = is1 + is2;

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		if (i < is1)
			str[i] = s1[i];
		else
			str[i] = s2[i - is1];
	}

	/* adding a null terminator to concatenated string */
	str[i] = '\0';
	return (str);
}
