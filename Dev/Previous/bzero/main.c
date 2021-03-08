#include <stdio.h>
#include <string.h>
#define LEN 10

void ft_bzero(void* str, size_t n);

int main(void) {
	char arr[LEN];
	int loop;

	printf("Array elements are (before ft_memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling all blocks with 0
	ft_bzero(arr,LEN);
	printf("Array elements are (after ft_memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");
	return 0;
}