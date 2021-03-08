//split() function implementation
//function name: ft_split()
/*
 * Description: Allocates and returns an array of strings obtained by
 * splitting 'str' using the character 'c' as a delimiter. The array must
 * be ended by a NULL poiter.
*/
/* 
 * Return Value: The array of new strings resulting from the split. NULL
 * if the allocation fails at any moment.
 */

#include <stdio.h>
#include <stdlib.h>

int ft_wrdcnt(const char *str, char c)
{
    unsigned int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] && (str[i] != c))
            i++;
    }
    return (count);
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

char *ft_strndup(const char *str, size_t n)
{
    char *copy;

    if (!(copy = malloc(sizeof(char) * n + 1)))
        return (NULL);
    ft_memcpy(copy, str, n);
    return (copy);
}

char **ft_split(const char *str, char c)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;
    char            **tab;

    i = 0;
    k = 0;
    //use ft_wrdcnt to allocate space for n * words in the string.
    if (!(tab = (char **)malloc(sizeof(char *) * (ft_wrdcnt(str, c)) + 1)))
        return (NULL);
    //increment str[i] so long as have not reached the end of string
    while (str[i])
    {
        //stop the 'i' when a word is find
        while (str[i] == c)
            i++;
        //set the 'j' to pinpoint the begin of the word
        j = i;
        //continues to increment the 'i to discover the end of the current word.
        while (str[i] && str[i] != c)
            i++;
        //(i > j) should be if there is a word
        if (i > j)
        {
            /* strndup the str from the beggining of te actual word (str + j)
             * until the word is complete (i - j) */
            tab[k] = ft_strndup(str + j, i - j);
            k++;
        }
    }
    tab[k] = NULL;
    return (tab);
}