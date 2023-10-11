#include <stdio.h>
#include "main.h"
/*
 * is lower is a functions that returns an integar (1) if the letter
 * is lowercase and (0) if otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
else
return (0);
}
