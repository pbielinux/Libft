//strncmp() function implementation
//function name: ft_strncmp()
/*
 * Description: Compares at most the first n bytes of str1 and str2
*/
/* Return Value: <0, >0, =0.
 */

#include <stdio.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while ((str1[i] || str2[i]) && i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
