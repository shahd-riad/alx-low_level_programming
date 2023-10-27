#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 *
 * Return: 0 Always (success)
*/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
