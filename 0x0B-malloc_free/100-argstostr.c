#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: A pointer to a new string, or NULL ifit fails or ac= 0 or av = NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, c = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
		c++;
	}
	c++;
	i = 0;
	j = 0;
	str = malloc(sizeof(char) * c);
	if (str == NULL)
		return (NULL);
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
