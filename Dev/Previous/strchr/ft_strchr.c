//strchr() function implementation
//function name: ft_strchr()
/* Description: searches for the first occurrence of the character c
 * (an unsigned char) in the string pointed to by the argument str. */
/* Return Value: This returns a pointer to the first occurrence of
 * the character c in the string str, or NULL if the character is
 * not found.*/

#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    if ((char)c == '\0')
        return ((char *)str);
    return (NULL);
}