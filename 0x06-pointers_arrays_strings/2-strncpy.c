#include "main.h"

/**
 *  * _strncpy - copies a string
 *   * @dest: string to copy to
 *    * @src: string to copy from
 *     * @n: maximum number of characters to copy from src
 *      *
 *       * Description:
 *        * works exactly like strncpy from <string.h>
 *         *
 *          * Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	i = 0;
	ptr = dest;
	while (*src && (i < n))
	{
		*dest++ = *src++;
		i++;
	}
	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}	
	return (ptr);
}


