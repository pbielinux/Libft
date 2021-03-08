//strlen() function implementation
//function name: ft_strlen()
/* Description: Computes the lenght of the string str up to, but
 * not including the terminating null character. */
// Return Value: Returns the lenght of the string

#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}