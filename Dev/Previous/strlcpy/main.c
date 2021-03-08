#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n);

int main()
{
    char str1[] = "ABCDEFG";
    char str2[] = "ABCDEFG";
    char str3[] = "0123";

    printf("\n The Dest before the ft_strlcpy is: %s \n", str1);
    printf("\n The Src is: %s \n", str3);
    printf("\n The returned value is: %zu \n", ft_strlcpy (str1, str3, 4));
    printf("\n It should be: %zu \n", strlcpy (str2, str3, 4));
    printf("\n The Dest After the ft_strlcpy is: %s \n", str1);
    printf("\n It should be: %s \n\n", str2);

    return 0;
}