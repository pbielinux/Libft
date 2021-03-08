#include <stdio.h>
#include <string.h>
#define LEN 10

void ft_memset(void* str, char c, size_t n);

int main(void) {
	char arr[LEN];
	int loop;

	printf("Array elements are (before ft_memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling all blocks with 0
	ft_memset(arr,0,LEN);
	printf("Array elements are (after ft_memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling first 3 blocks with -1
	//and second 3 blocks with -2
	//and then 3 blocks with -3
	ft_memset(arr,-1,3);
	ft_memset(arr+3,-2,3);
	ft_memset(arr+6,-3,3);
	printf("Array elements are (after ft_memset()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	return 0;
}