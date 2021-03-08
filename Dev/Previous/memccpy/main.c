#include<stdio.h> 
#include<string.h> 

void *ft_memccpy(void* dest, const void* src, int c, size_t n);

int main() 
{ 
   char csrc[] = "This is my string: A simple string"; 
   char cdest[100]; 
   ft_memccpy(cdest, csrc, 'e', strlen(csrc)+1); 
   printf("Copied string is %s", cdest); 
  
   int isrc[] = {10, 20, 30, 40, 50}; 
   int n = sizeof(isrc)/sizeof(isrc[0]); 
   int idest[n], i; 
   ft_memccpy(idest, isrc, 50, sizeof(isrc)); 
   printf("\nCopied array is "); 
   for (i=0; i<n; i++) 
     printf("%d ", idest[i]); 
   return 0; 
} 