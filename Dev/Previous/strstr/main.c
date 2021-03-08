#include <stdio.h>

const char *ft_strstr(const char *str1, const char *str2);
// Implement strstr function in C
int main()
{
    char *X = "Techie Delight - Coding made easy";
    char *Y = "Coding";
 
    printf("%s\n", ft_strstr(X, Y));
 
    return 0;
}