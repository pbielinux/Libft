//strnlen() function implementation
//function name: ft_strnlen()
/* Description: returns the number of bytes in the string
 * pointed to by s, excluding the terminating null byte ('\0'), but
 * at most maxlen. */
/* Return Value: returns strlen(s), if that is less than
 * maxlen, or maxlen if there is no null terminating ('\0') among
 * the first maxlen characters pointed to by s. */

#include <stdio.h>

size_t  ft_strnlen(const char *str, size_t maxlen)
{
    size_t i;

    i = 0;
    while (str[i] && i < maxlen)
        i++;
    return (i);
}