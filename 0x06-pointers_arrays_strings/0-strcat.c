#include "main.h"
/**
 *  * *_strcat - concatenates two strings
 *   * @dest: pointer destination
 *    * @src: pointer source
 *     * Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	char *contecated;
       
	contecated = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (contecated);

}
