#include <stdio.h>

void print_buffer(char *, int);

/**
 * main - check the code for holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[] = "Talk is cheap. show me the code.";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
