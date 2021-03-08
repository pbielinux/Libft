//memmove() function implementation
//function name: ft_memmove()
//Prototype: void* ft_memmove(void* dest, const void* src, size_t n)

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

void *ft_memmove(void* dest, const void* src, size_t n)
{
    //Typecast src and dest to (char *)
    char *cdest;
    const char *csrc;

    cdest = (char *)dest;
    csrc = (const char *)src;
    //If src is higher than dest use Memcpy
    if (dest <= src)
        return ft_memcpy (cdest, csrc, n);
    else
	{
        //copy backwards
        cdest += n;
        csrc += n;
        	while (n--)
        	{
            	*--cdest = *--csrc;
        	}
	}
    return (dest);
}
