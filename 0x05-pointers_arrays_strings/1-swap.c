#include <stdio.h>
#include "main.h"

/**
 *  * swap_int - swaps the values of two integers.
 *   * @a: value to evaluate.
 *    * @b: value to evaluate.
 *      * Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	*a= *a + *b;
	*b= *a - *b;
        *a= *a - *b;
}
