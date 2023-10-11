#include <stdio.h>
#include "main.h"

/**
 *   * times_table - Check description
 *     * Description: It prints 9 times table starting with 0
 *       * Return: Nothing.
*/
void times_table(void)
{
int num;	
int i;

	for (num = 0; num < 10; num++)
	{
		for(i = 0; i < 10; i++)
		{
			int result = num * i;										                printf("%d", result);
			if(i < 9)
				printf(", ");									
	       	}
	        putchar('\n');
	}
}
