//Write a program that reads ‘n’ from the
//user and allocates memory to hold n
//integer numbers. Pass these numbers
//to a function that returns the sum.

#include <stdio.h>
#include <stdlib.h>
int size;
void main(){
	int i;
	printf("Enter the size of arrays: ");scanf("%d",&size);
	int *arr = (int*) calloc(size,sizeof(int));
	printf("Enter elements of array: \n");
	for(i=0;i<size;i++){
		scanf("%d",arr + i);
	}
	printf("%d",sum(arr));
	free(arr);
}

sum(int arr1[size]){
	int i,sum =0;
	for(i=0;i<size;i++){
		sum=sum + *(arr1 + i);
	}
	return sum;
}
