//substr() function implementation
//function name: ft_substr()
/*
 * Description: Allocates and returns a substring from the given string.
*/
/* Return Value: A pointer for the substring. NULL if the allocation fails.
 */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t i;
    char *sub;

    i = 0;
    if (!((char *)malloc(sizeof(char) * len + 1)))
        return (NULL);
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}