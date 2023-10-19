#include "main.h"

/**
 *  * string_toupper - converts all lowercase letters of a string to uppercase
 *   * @str: string to be comverted
 *    *
 *     * Return: pointer to converted uppercase string
*/
char *string_toupper(char *str)
{
	int i;
  	char *ptr;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return(str);
}
