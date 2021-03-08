#include <stdio.h>
#include <string.h>

char *ft_strndup(const char *str, size_t n);

int main()
{
   char *str = "Helloworld";
   char *result;
   result = ft_strndup(str, 3);
   printf("The string : %s", result);
   return 0;
}