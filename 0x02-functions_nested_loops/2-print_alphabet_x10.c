#include <stdio.h>
#include "main.h"
/*
 *  * print_alphabet_x10 - Prints the alphabet
 *   * in lowercase 10 times
*/
void print_alphabet_x10(void)
{
char alpha;
int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
		putchar('\n');
	}
}
