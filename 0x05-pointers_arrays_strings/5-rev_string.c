#include <stdio.h>
#include "main.h"

/**
 *  *rev_string - update value.
 *   *@s: value for evaluation.
 *    *Return: 0.
*/
void rev_string(char *s)
{
	int len;
	int l;
	char temp;

	for (l = 0; s[l]; ++l)
		continue;
	--l;
	for (len = 0; len < l / 2; len++)
	{
		temp = s[len];
		s[len] = s[l - len - 1];
		s[l - len - 1] = temp;
	}
}
