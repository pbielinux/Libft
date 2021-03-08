#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c);

int main()
{
    const char str[] = "If it finds the, this dumb program is good!";
    const char c = ',';
    char *ret;
    
    ret = ft_strchr(str, c);
    printf("\n String after |%c| is: |%s| \n", c, ret);
    ret = strchr(str, c);
    printf("\n And it should be: |%s| \n\n", ret);

    return (0);
}