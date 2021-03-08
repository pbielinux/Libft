#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len);

int main()
{
    char *str = "this is a string to test my function";
    unsigned int start = 10;
    unsigned int len = 6;

    printf("\nThe string is: %s\n", str);
    printf("\nStart at: %d\n", start);
    printf("\nCopy: %d\n", len);
    printf("\nThe substring is: %s\n\n", ft_substr(str, start, len));
    return (0);
}