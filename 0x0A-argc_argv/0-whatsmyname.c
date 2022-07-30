#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints it name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, or any other number on fail
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
