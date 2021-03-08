#include<stdio.h> 
#include<string.h> 

void *ft_memcpy(void* dest, const void* src, size_t n);

int main() 
{ 
   char csrc[] = "GeeksforGeeks"; 
   char cdest[100]; 
   ft_memcpy(cdest, csrc, strlen(csrc)+1); 
   printf("Copied string is %s", cdest); 
  
   int isrc[] = {10, 20, 30, 40, 50}; 
   int n = sizeof(isrc)/sizeof(isrc[0]); 
   int idest[n], i; 
   ft_memcpy(idest, isrc,  sizeof(isrc)); 
   printf("\nCopied array is "); 
   for (i=0; i<n; i++) 
     printf("%d ", idest[i]); 
   return 0; 
} 