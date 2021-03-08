#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *str1, const char *str2, size_t n);

int main()
{
    char *searchingFor = "cat";
    char *in = "Test.. ... find the 'cat' at this string";
    int n = 30;
    
    printf("\n Haystack: %s\n", in);
    printf("\n Needle: %s\n", searchingFor);
    printf("\n At the a max len of: %d\n", n);
    printf("\n Found: %s\n", ft_strnstr(in, searchingFor, n) ? "yes" : "no");
    printf("\n Must be: %s\n\n", strnstr(in, searchingFor, n) ? "yes" : "no");

    return 0;
}