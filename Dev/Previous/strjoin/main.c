#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(const char *s1, const char *s2);

int main()
{
    char *str1 = "This is a string,";
    char *str2 = " whith another string.";

    printf("\nThe string 1 is: %s\n", str1);
    printf("\nThe string 2 is: %s\n", str2);
    printf("\nAnd joining both: %s\n\n", ft_strjoin(str1, str2));
    return (0);
}