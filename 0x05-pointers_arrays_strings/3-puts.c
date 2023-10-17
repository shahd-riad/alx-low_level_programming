#include <unistd.h>
#include "main.h"

/**
 *  * _puts - prints a string, to stdout
 *   * @str: value to evaluate.
 *    * Return: void
*/

void _puts(char *str)
{
		

			while (*str != '\0')
					{
								_putchar(*str);
									*str++;
											}
			_putchar('\n');
}
