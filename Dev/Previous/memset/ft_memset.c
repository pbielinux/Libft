//memset() function implementation
//function name: ft_memset()

#include <stdio.h>

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
    return (str);
}
