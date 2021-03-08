//memccpy() function implementation
//function name: ft_memccpy()
//Prototype: void* ft_memccpy(void *dest, const void *src, int c, size_t n)

#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    char    *cdest;
    char    *csrc;

    i = 0;
    //Typecast src and dest adresses to (char *)
    cdest = (char *)dest;
    csrc = (char *)src;
    while (i < n)
    {
        /*copy contents of src[] to dest[]. If the casted csrc
        unsigned char at [i] is equal c, it immediately return
        a char casted pointer to the index position after it in
        our dest.*/
        cdest[i] = csrc[i];
        if ((unsigned char)csrc[i] == (unsigned char)c)
            return ((char *)dest + i + 1);
        i++;
    }
    return (NULL);
}