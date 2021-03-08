#include <stdio.h>
#include <string.h>

size_t ft_strcpy(char *dest, const char *src);

int main()
{
    char str1[] = "ABCDEFG";
    char str2[] = "ABCDEFG";
    char str3[] = "0123";

    printf("\n The Dest before the ft_strlcpy is: %s \n", str1);
    printf("\n The Src is: %s \n", str3);
    printf("\n The returned value is: %zu \n", ft_strcpy (str1, str3));
    printf("\n It should be: %zu \n", strcpy (str2, str3));
    printf("\n The Dest After the ft_strlcpy is: %s \n", str1);
    printf("\n It should be: %s \n\n", str2);

    return 0;
}