//strjoin() function implementation
//function name: ft_strjoin()
/*
 * Description: Allocates and returns a new string, wich is result of the
 * concatenation of str1 and str2.
*/
/* Return Value: A pointer for the new string. NULL if the allocation fails.
 */

#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i;
    size_t j;
    char *new;

    i = 0;
    j = 0;
    if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    
    while (s1[i] != '\0')
    {
        new[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        new[i + j] = s2[j];
        j++;
    }
    new[i+j] = '\0';
    return (new);
}