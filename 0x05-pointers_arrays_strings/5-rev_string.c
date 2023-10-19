#include <stdio.h>
#include "main.h"

/**
 *  *rev_string - update value.
 *   *@s: value for evaluation.
 *    *Return: 0.
*/
void rev_string(char *s)
{
	int len;
	
	for (len = 0;  s[len] != '\0'; ++len)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
