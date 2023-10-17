#include <stdio.h>
#include "main.h"

/**
 *  * puts2 - prints pair values.
 *   * @str: value to be evaluated.
 *    * Return: 0
*/

void puts2(char *str)
{
	int len;
	int l;
	char *y;
	int z;

	len = 0;
	l = 0;
	*y = str;
	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;							
	for (z = 0 ; z <= l ; z++)									{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');

}
