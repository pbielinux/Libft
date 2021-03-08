#include <stdio.h>
#include <string.h>

void *ft_memmove(void* dest, const void* src, size_t n);

int main()
{
    char str1[50] = "I am going from Delhi to Gorakhpur";
    char str2[50] = "I am going from Delhi to Gorakhpur";
    char str3[50] = "I am going from Delhi to Gorakhpur";
    //Use of ft_memmove
    printf( "Function:\tft_memmove with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 5 );
    printf( "Destination:\t%s\n", str1 + 11 );
    ft_memmove( str1 + 11, str1 + 5, 29 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );
    //Use of memmove
    printf( "Function:\tmemmove with overlap\n" );
    printf( "Orignal :\t%s\n",str2);
    printf( "Source:\t\t%s\n", str2 + 5 );
    printf( "Destination:\t%s\n", str2 + 11 );
    memmove( str2 + 11, str2 + 5, 29 );
    printf( "Result:\t\t%s\n", str2 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str2 ) );
    //Use of memcpy
    printf( "Function:\tmemcpy with overlap\n" );
    printf( "Orignal :\t%s\n",str3);
    printf( "Source:\t\t%s\n", str3 + 5 );
    printf( "Destination:\t%s\n", str3 + 11 );
    memcpy( str3 + 11, str3 + 5, 29 );
    printf( "Result:\t\t%s\n", str3 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str3 ) );
    return 0;
}
