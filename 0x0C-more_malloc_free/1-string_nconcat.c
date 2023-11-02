#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	
	int len_s1;
	int len_s2;
	int i;
	int j = 0;
	char *s3;

	len_s1 = (s1 == NULL) ? 0 : _strlen(s1);
	len_s2 = (s2 == NULL) ? 0 : _strlen(s2);

	s3 = malloc(sizeof(char) * (len_s1 + n + 1));

    if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++, j++)
		s3[j] = s1[i];

	for (i = 0; i <= n; i++, j++)
		s3[j] = s2[i];

	s3[j] = '\0';

	return (s3);
}
/**
 * _strlen - finds the length of a string
 * @s: address of first character in the string
 *
 * Return: length og the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
