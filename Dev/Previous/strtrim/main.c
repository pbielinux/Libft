#include <stdio.h>

char *ft_strtrim(const char *s1, const char *set);

int main()
{
    char *str = "....ooo;;;|this is a string to test my function|;;;ooo...";
    char *set = ".o;";

    printf("\nThe string is: %s\n", str);
    printf("\nThe chars to be removed: %s\n", set);
    printf("\nThe Trimmed string is: %s\n\n", ft_strtrim(str, set));
    return (0);
}
