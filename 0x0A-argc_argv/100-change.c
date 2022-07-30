#include <stdio.h>
#include <stdlib.h>

/**
 * change - determine the minimum number of coins to make change \
 * for an amount of money
 * @argv: argument vector
 *
 * Return: the minimum number of coins to make change for an amount of money
 */
int change(int argv)
{
	static int i, c;
	int v[5] = {25, 10, 5, 2, 1};

	if (argv == 0)
	{
		return (c);
	}
	else
	{
		while (argv >= v[i])
		{
			argv -= v[i];
			c++;
		}
		i++;
		return (change(argv));
	}
}


/**
 * main - prints the minimum number of coins to make change for an amount \
 * of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if argc == 1, otherwise 0 always
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
		printf("0\n");
	else
		printf("%d\n", change(c));
	return (0);
}
