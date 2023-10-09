#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
*/
int main(void)
{
char alpha;
char hex;

	for (alpha = '0'; alpha <= '9'; alpha++)
		putchar(alpha);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
