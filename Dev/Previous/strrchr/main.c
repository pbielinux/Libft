#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main()
{
    const char str[] = "teste 1 , teste 2 , teste 3 , teste 4.";
    const char c = '.';
    char *ret;
    
    ret = ft_strrchr(str, c);
    printf("\n String after |%c| is: |%s| \n", c, ret);
    ret = strrchr(str, c);
    printf("\n And it should be: |%s| \n\n", ret);

    return (0);
}