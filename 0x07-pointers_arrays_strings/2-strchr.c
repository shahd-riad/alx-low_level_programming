#include "main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string
 * @s: string to be checked
 * @c: character to be located in s
 *
 * Return: pointer to the first occurence of c in s. Otherwise NULL
*/
char *_strchr(char *s, char c)
{
    int i;
    char *ret;
    int y;

    for (i = 0; s[i] != '\0'; i++)
    {
            if (s[i] == c)
            {
                y = i;
                break;
            }
    }
    for (i = y; s[i] != '\0'; i++)
    {
           ret[i] = _putchar(s[i]);
    }
    if (s[i] == c)
        return(ret);
return (NULL);
}

