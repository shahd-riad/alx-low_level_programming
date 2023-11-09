#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
*/
void print_opcodes(char *a, int n);

int main(int argc, char *argv[])
{
	int arg;
	
	arg = atoi(argv[1]);
       	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)main, n);
	return (0);
}

void print_opcodes(char *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%.2x ", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
