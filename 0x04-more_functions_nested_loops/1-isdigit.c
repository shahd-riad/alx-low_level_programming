#include "main.h"

/**
 * _isdigit -  a function that checks for a digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (0);
	else if (c % 10)
		return (1);
}

