#include <stdio.h>
#include <stdlib.h>

char **ft_split(const char *str, char c);

int main()
{
    int i = 0;
    char *str = "****teste*string**split**";
    char **arr = ft_split(str, '*');

    while (arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
    return 0;
}