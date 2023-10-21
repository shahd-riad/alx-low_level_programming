# include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
*/
void print_diagonal(int n)
{
    int i;
    int j;

    if (n <= 0)
    {
        _putchar('\n');
    }
    if (n > 0)
    {
        for (i = 0; i <= n; i++)
        {
            for(j = 0; j < (i - 1); j++)
            {
                 _putchar(' ');
            }
            _putchar('\\');
             _putchar('\n');
        }
    }
}
