#include "main.h"
/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
*/
void print_square(int size)
{
	int i;
       	int j;
      
	if (size > 0)
    	{
	    	for (i =0; i < (size); i++)
		{
			_putchar('\n');
			for (j =0; j < size; j++)
			{
				_putchar('#');
			}
			if (i ==j - 1)
				continue;
		}
	}
       	_putchar('\n');
}

