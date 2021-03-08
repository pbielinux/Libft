//strdup() function implementation
//function name: ft_strdup()
/*
 * Description: Is used to duplicate a string.
*/
/*
 * Return Value: It returns a pointer to NULL-terminated byte string.
 */

#include "libft.h"

char *ft_strdup(const char *str)
{
    size_t len;
    char *copy;

    len = ft_strlen(str) + 1;
    if (!(copy = malloc((unsigned int)len)))
        return (NULL);
    ft_memcpy(copy, str, len);
    return (copy);
}
