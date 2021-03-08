//strrchr() function implementation
//function name: ft_strrchr()
/* Description: searches for the last occurrence of the character c
 * (an unsigned char) in the string pointed to, by the argument str. */
/* Return Value: This function returns a pointer to the last occurrence
 * of character in str. If the value is not found, the function returns
 * a null pointer.*/

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

char *ft_strrchr(const char *s, int c)
{
    const char *found;
    const char *pnt;

    //internally convert int c back to char
    c = (unsigned char) c;

    /* This function have similar behavior as ft_strchr, this can
     * be useful */
    if (c == '\0')
        return (ft_strchr (s, c));
    found = NULL;
    /* Checks every ocurrency of the c in the string, 
     * looking from the last found */
    while ((pnt = ft_strchr (s, c)) != NULL)
    {
        found = pnt;
        s = pnt + 1;
    }
    return ((char *) found);
}