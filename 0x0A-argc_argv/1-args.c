#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, or any other number if it fails
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
