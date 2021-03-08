//strnstr() function implementation
//function name: ft_strnstr()
/*
 * Description: function locates the first occurrence of the null-termi-
 * nated string little in the string big, where not more than len characters
 * are searched. Characters that appear after a `\0' character are not
 * searched.
*/
/* Return Value: If	little is an empty string, big is returned; if little occurs
 * nowhere in big, NULL is returned; otherwise a pointer to the first character
 * of the first occurrence of little is returned.
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

char *ft_strnstr(const char *str1, const char *str2, size_t n)
{
    size_t str2_len;
    /* If the needle is empty, return pnt to hailstack*/
    if (*str2 == '\0')
        return ((char *)str1);

    str2_len = ft_strlen(str2);
    /* Only compare until finds a '\0' or the needle doesn't fit
     * in the n anymore */
    while (*str1 != '\0' && n-- >= str2_len)
    {
        if (*str1 == *str2 && !ft_memcmp(str1, str2, str2_len))
            return ((char *)str1);
        str1++;
    }
    return (NULL);
}
