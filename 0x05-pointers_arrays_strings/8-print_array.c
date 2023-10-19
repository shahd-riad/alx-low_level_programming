#include "main.h"
#include<stdio.h>

/**
 *  * print_array - update value.
 *   * @a: value to evaluated.
 *    * @n: value to evaluated.
 *     * Return: 0
*/
void print_array(int *a, int n)
{
	int l;

	for(l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l != n-1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
