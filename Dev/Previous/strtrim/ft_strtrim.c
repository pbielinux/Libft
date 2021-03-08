//strtrim() function implementation
//function name: ft_strtrim()
/*
 * Description: Allocates and returns a copy of 's1' with the characteres
 * specified in 'set' removed from the beginning and the end of the string.
*/
/* Return Value: A pointer to the trimmed string, NULL if the allocation
 * fails.
 */

#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

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

void* ft_memcpy(void* dest, const void* src, size_t n)
{
    size_t i;
    //typecast src and dest adresses to (char *)
    char *csrc = (char *)src;
    char *cdest = (char *)dest;

    //copy contents of src[] to dest[]
    i = 0;
    while (i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
    return (dest);
}

size_t ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
    //check the src lenght
    const size_t srclen = ft_strlen(src);

    /* If the src + 1 (ensuring space for the '\0'), then copy
     * the src to dest */
    if (srclen + 1 < maxlen)
        ft_memcpy(dest, src, srclen + 1);
    /* Else copy 1 less char to ensure the space for '\0' */
    else if (maxlen != 0)
    {
        ft_memcpy(dest, src, maxlen - 1);
        dest[maxlen-1] = '\0';
    }
    return (srclen);
}

char *ft_strtrim(const char *s1, const char *set)
{
    unsigned int beg;
    unsigned int end;
    char *trim;

    if (!s1 || !set)
        return (NULL);
    beg = 0;
    // Set the start after the trimmed chars
    while (s1[beg] && ft_strchr(set, s1[beg]))
        beg++;
    //First set the end to be the size of the string from the beg(after trim)
    end = ft_strlen(s1 + beg);
    if (end)
    {
        /* Decrement the end. While the strchr returns a ptr, it means that is a char
         * in the set and have to be trimmed, so end--*/
        while (s1[beg + end - 1] != 0 && ft_strchr(set, s1[beg + end - 1]) != 0)
            end--;
    }
    if(!(trim = malloc(sizeof(char) * end + 1)))
        return (NULL);
    /*strlcpy ensures the space to '\0' so its necessary to append the last char
     * in the trimmed string */
    ft_strlcpy(trim, s1 + beg, end + 1);
    trim[end] = '\0';
    return (trim);
}