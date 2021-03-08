//strstr() function implementation
//function name: ft_strstr()
/*
 * Description: finds the first occurrence of the substring needle
 * in the string haystack. The terminating '\0' characters are not
 * compared.
*/
/* Return Value: This function returns a pointer to the first
 * occurrence in haystack of any of the entire sequence of characters
 * specified in needle, or a null pointer if the sequence is not
 * present in haystack.
 */

#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;
    //Typecast str1 and str2 to (const unsigned char *)
    const unsigned char *cs1;
    const unsigned char *cs2;

    cs1 = (const unsigned char *)str1;
    cs2 = (const unsigned char *)str2;
    //compare the strings bit-to-bit
    i = 0;
    while (i < n)
    {
        if (cs1[i] != cs2[i])
            return ((unsigned char) cs1[i] - (unsigned char) cs2[i]);
        i++;
    }
    return (0);
}

const char *ft_strstr(const char *str1, const char *str2)
{
    size_t n;

    n = ft_strlen(str2);
    while (*str1)
    {
        if (!ft_memcmp(str1, str2, n))
            return ((const char *) str1);
        str1++;
    }
    return (NULL);
}