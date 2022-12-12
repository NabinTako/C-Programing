#include <stdio.h>
#include <stdlib.h>

//Finding maximum in an array using dynamic memory allocation.

void main(){
	int size,i;
	printf("Enter the size of array: ");scanf("%d",&size);
	int *ptr_int =  (int*) calloc(size, sizeof(int));
	printf("Enter the elements.\n");
	for(i=0;i<size;i++){
		scanf("%d",ptr_int + i);
	}
	int *greatest = ptr_int; 
	for(i=0;i<size;i++){
		if(*greatest < *(ptr_int + i)){
			*greatest = (ptr_int + i);
		}
	}
	printf("Greatest element: %d",*greatest);
	free(ptr_int);
	
} 
