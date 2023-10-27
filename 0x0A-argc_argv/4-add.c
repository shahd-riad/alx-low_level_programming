#include<stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 * Otherwise - 0.
*/
int main(int argc, char **argv)
{
    	int i;
	int sum;
	
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
return (0);
}



