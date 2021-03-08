//strcpy() function implementation
//function name: ft_strcpy()
/* Description: Copies the string src to dest.*/
/* Return Value: Returns a pointer to the copied string. */

#include <stdio.h>

char *ft_strcpy(char *dest, const char *src)
{
    size_t i;

    i = 0;
    while (src[i] != '\0')
    {
       dest[i] = src[i];
       i++;
    }
    dest[i] = '\0';
    return (dest);
}