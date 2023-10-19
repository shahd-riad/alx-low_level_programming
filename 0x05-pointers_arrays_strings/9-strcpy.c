#include "main.h"
#include<stdio.h>

/**
 *  * _strcpy - update value.
 *   * @dest: value to be evaluated.
 *    * @src: value to be evaluated.
 *     * Return: 0
*/
char* _strcpy(char* dest, char* src) 
{
	char* ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}


