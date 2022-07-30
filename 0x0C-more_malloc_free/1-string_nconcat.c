#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: base address of first string
 * @s2: base address of second string
 * @n: number of bytes from s2 to be concatenated to s1
 * Return: a pointer to a newly allocated memory containing the concati result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, tlen, s1Len = ISNULL(s1), s2Len = ISNULL(s2);
	char *cptr;

	if (n >= s2Len)
	{
		tlen = s1Len + s2Len + 1;
		cptr = malloc(sizeof(*cptr) * tlen);
	}
	else
	{
		tlen = s1Len + n + 1;
		cptr = malloc(sizeof(*cptr) * tlen);
	}

	RETNULL(cptr == NULL);

	for (i = 0; i < tlen - 1; i++)
		cptr[i] = (i < s1Len) ? s1[i] : s2[i - s1Len];
	cptr[i] = '\0';

	return (cptr);
}
