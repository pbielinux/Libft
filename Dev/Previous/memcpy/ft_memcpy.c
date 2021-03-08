//memcpy() function implementation
//function name: ft_memcpy()
//Prototype: void* ft_memcpy(void *dest, void *src, size_t n)
#include <stdio.h> 

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