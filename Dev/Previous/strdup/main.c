#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *str);

int main()
{
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}
