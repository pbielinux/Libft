//itoa() function implementation
//function name: ft_itoa()
/*
 * Description: Converts a integer value to a null-terminated string using the
 * specified base and stores the result in the array given by str.
*/
/* 
 * Return Value: A pointer to the resulting string.
 */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strcpy(char *dest, const char *src)
{
    size_t i;

    i = 0;
    while (src[i] != '\0')
    {
       dest[i] = src[i];
       i++;
    }
    dest[i] = '\0';
    return (dest);
}

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
    new[i + j] = '\0';
    return (new);
}

char    *ft_itoa(int n)
{
    char *str;

    if (!(str = (char *)malloc(sizeof(char) * 2)))
        return (NULL);
    if (n == -2147483648)
        return (ft_strcpy(str, "-2147483648"));
    if (n < 0)
    {
        str[0] = '-';
        str[1] = '\0';
        str = ft_strjoin(str, ft_itoa(-n));
    }
    else if (n >= 10)
        str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
    else if (n < 10 && n >= 0)
    {
        str[0] = n + '0';
        str[1] = '\0';
    }
    return (str);
}
