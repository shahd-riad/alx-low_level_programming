#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill in
 * @b: constant byte to fill s with
 * @n: number of bytes to write
 *
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *sptr;
	int i;

	sptr = s;
	
	for (i = 0; i <= n; i++)
	{
		s[i] = b;
		if (i == n)
		{
			s[i] = '\0';
		}
	}
	return (sptr);
}
