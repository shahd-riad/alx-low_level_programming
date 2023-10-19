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

	for (len = 0;  str[len] != '\0'; ++len)
	{
		if(str[len] % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
