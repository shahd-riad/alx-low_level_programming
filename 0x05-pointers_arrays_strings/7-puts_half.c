#include <stdio.h>
#include "main.h"

/**
 *  * puts_half - update value.
 *   * @str: value to be evaluated.
 *    * Return: 0
*/
void puts_half(char *str)
{
	int len;
	int l;

	for (len = 0;  str[len] != '\0'; ++len)
	{
	}
	if(len % 2 != 0)
	{
		for ( l = (len-1) / 2; str[l] != '\0'; l++)
		{
			putchar(str[l]);
		}
	}
	else
	{
		for ( l = len / 2;str[l] != '\0'; l++)
		{
			putchar(str[l]);
		}
	}
	putchar('\n');
}

