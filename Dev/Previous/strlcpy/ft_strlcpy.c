//strlcpy() function implementation
//function name: ft_strlcpy()
/* Description: Copies up to dstsize - 1 characters from the
 * string src to dst, NUL-terminating the result if dstsize
 * is not 0. */
/* Return Value: Returns the total lenght of the string it tried
 * to create. That means, the lenght of source. */

#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
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