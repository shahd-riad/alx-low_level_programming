#include "main.h"
/**
 *  * *_strcat - concatenates two strings
 *   * @dest: pointer destination
 *    * @src: pointer source
 *     * Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	/*initializing the return value contecated*/

	char *contecated;
       
	contecated = dest;
	/*going to end of dest */
	while (*dest)
		dest++;
	/*adding *src characters to dest */
	while (*src)
		*dest++ = *src++;

	/*adding terminating null byte to dest */
	*dest = '\0';
	return (contecated);

}
