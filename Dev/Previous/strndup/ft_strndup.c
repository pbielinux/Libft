//strndup() function implementation
//function name: ft_strndup()
/*
 * Description: copy at most n characters from the given string, always
 * NULL terminating the copyed string.
*/
/* 
 * Return Value: It returns a pointer to NULL-terminated byte string.
 */

#include <stdio.h>
#include <stdlib.h>


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

char *ft_strndup(const char *str, size_t n)
{
    char *copy;

    if (!(copy = malloc(sizeof(char) * n + 1)))
        return (NULL);
    ft_memcpy(copy, str, n);
    return (copy);
}