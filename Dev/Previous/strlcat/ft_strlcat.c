//strlcat() function implementation
//function name: ft_strlcat()
/* Description: appends the NUL-terminated string src to the end
 * of dst. It will append at most size - strlen(dst) - 1 bytes,
 * NUL-terminating the result. */
/* Return Value: Returns the total lenght of the string it tried
 * to create. That means, the initial length of dst plus the
 * length of src */

#include <stdio.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t  ft_strnlen(const char *str, size_t maxlen)
{
    size_t i;

    i = 0;
    while (str[i] && i < maxlen)
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

size_t ft_strlcat(char *dest, const char *src, size_t maxlen)
{
    size_t srclen;
    size_t destlen;

    //Check the src and dest lenght
    srclen = ft_strlen(src);
    destlen = ft_strnlen(dest, maxlen);
    /*If destlen is equal to maxlen, the cat string remains the same
     * and imediately returns the lenght of the string it tried to
     * create*/
    if (destlen == maxlen)
        return (maxlen + srclen);
    /*If the src with the NUL-terminated fits, it concatenate*/
    if (srclen < (maxlen - destlen))
        ft_memcpy(dest+destlen, src, srclen + 1);
    /*If the src doesn't fit, need to ensure that will left space
     * for the '\0' */
    else
    {
        ft_memcpy(dest+destlen, src, maxlen - destlen -1);
        dest[maxlen-1] = '\0';
    }
    return (destlen + srclen);    
}