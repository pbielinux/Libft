#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n);

int main ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char c = '.';
   char *ret;

   ret = ft_memchr(str, c, strlen(str));

   printf("String after |%c| is - |%s|\n", c, ret);

   return(0);
}