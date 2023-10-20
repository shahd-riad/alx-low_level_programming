#include "main.h"

/**
 *  * leet -  encodes a string into 1337
 *   * @str: string to encode
 *    *
 *     * Return: pointer to encoded str
*/
char *leet(char *str)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (a[j] == str[i])
			{
				str[i] = b[j];
			}									
		}	
	}
	return (str);
}
