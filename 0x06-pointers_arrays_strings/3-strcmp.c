#include "main.h"

/**
 *  * _strcmp - compares 2 strings
 *   * @s1: first string
 *    * @s2: second string
 *     *
 *      * Description: works exactly like strcmp from <string.h>
 *       *
 *        * Return: -ve integer, 0 or +ve integer if s1 is less than,
 *         * equal to or greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	int sum1;
	int sum2;
	int len;

	sum1 = 0;
	sum2 = 0;
	for (len = 0; s1[len] != '\0'; len++)
	{
		sum1 += (int)s1[len];
	}
	for (len = 0; s2[len] != '\0'; len++)
	{
		sum2 += (int)s2[len];
	}
	return (sum1 - sum2);
}
