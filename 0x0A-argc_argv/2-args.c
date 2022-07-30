#include <stdio.h>

/**
 * prt_args - prints all argument it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, or any other number if it fails
 */
int prt_args(int argc, char *argv[])
{
	static int i;

	if (argc == i)
		return (0);
	printf("%s\n", argv[i]);
	i++;
	return (prt_args(argc, argv));
}

/**
 * main - prints all argument it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, or any other number if it fails
 */
int main(int argc, char *argv[])
{
	return (prt_args(argc, argv));
}
