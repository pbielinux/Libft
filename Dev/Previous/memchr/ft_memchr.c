//memchr() function implementation
//function name: ft_memchr()
//Prototype: void *ft_memchr(cont void *str, int c, size_t n)

#include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    //Typecast str to (cons char *)
    const char *cstr;

    cstr = (const char *)str;
    //Search for c
    i = 0;
    while (i < n)
    {
        if (cstr[i] == c)
            //Returns a pointer to the matching byte
            return (void *)&cstr[i];
        i++;
    }
    //if not occour in the given memory area, the ft returns NULL
    return (NULL);
}