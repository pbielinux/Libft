//memcmp() function implementation
//function name: ft_memcmp()
/* Description: Compares the first n bytes of memory area str1 and
 * memory area str2 */
// Return Value: <0, >0, =0

#include <stdio.h>

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