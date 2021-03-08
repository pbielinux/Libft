//calloc() function implementation
//function name: ft_calloc()
/*
 * Description: allocates the requested memory and returns a poiter to it.
 * The difference to malloc is that calloc sets allocated memory to zero.
*/
/* Return Value: Returns a poiter to the allocated memory, or NULL if the
 * request fails.
 */

#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void* str, char c, size_t n)
{
    size_t i;
    //to type cast the str from void* to char*
    char *s = (char*) str;

    //fill "n" elements/blocks whith c
    i = 0;
    while (i < n)
    {
        s[i] = c;
        i++;
    }
    return (s);
}

void    ft_bzero(void* str, size_t n)
{
    ft_memset(str, 0, n);
}

void *ft_calloc(size_t n, size_t n_size)
{
    void *ptr;

    ptr = malloc (n * n_size);
    if (ptr == 0)
        return (ptr);
    ft_bzero (ptr, n * n_size);
    return (ptr);
}
