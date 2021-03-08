#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char *dest, const char *src, size_t maxlen);

int main()
{
    char str1[50] = "ABC";
    char str2[50] = "ABC";
    char str3[] = "0123";

    printf("\n The Dest before the ft_strlcat is: %s \n", str1);
    printf("\n The Src is: %s \n", str3);
    printf("\n The returned value is: %zu \n", ft_strlcat (str1, str3, 7));
    printf("\n It should be: %zu \n", strlcat (str2, str3, 7));
    printf("\n The Dest After the ft_strlcat is: %s \n", str1);
    printf("\n It should be: %s \n\n", str2);

    return 0;
}