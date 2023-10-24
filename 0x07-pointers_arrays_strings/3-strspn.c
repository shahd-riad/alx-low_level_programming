#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing the only accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;
	int full;

	count = 0;
	full = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j =0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
		full++;
	}
	return (full - count);
}


