#include "main.h"

/**
 *  * _strncat - concatenates two strings
 *   * @dest: string to append to
 *    * @src: string whose characters are to be appended to dest
 *     * @n: maximum characters to copy from src
 *      *
 *       * Description:
 *        * it will use at most n bytes from src
 *         * src does not need to be null-terminated if it contains n 
 *          * or more bytes
 *           * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *contecated;
    	int i;
	
	i = 0;
	contecated = dest;
	while (*dest)
		dest++;    
	while (*src && (i < n))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (contecated);
}


