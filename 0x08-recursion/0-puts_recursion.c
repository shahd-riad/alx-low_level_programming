#include <stdio.h>
#include "main.h"
/**
 *_puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
*/
void _puts_recursion(char *s)
{
	int i;

	i = 0;
       	if (*s)
	{
		_putchar(s[i]);
		s = s + 1;
		_puts_recursion(s);
	}
       	if (s[i] == '\0')
	       	return;
}
