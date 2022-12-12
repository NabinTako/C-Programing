#include <stdio.h>
#include <stdlib.h>
/*
void main(){
	int *ptr_int = (int*) malloc(sizeof(int));
	float *ptr_float = (float*) malloc(sizeof(float));
	char *ptr_char = (char*) malloc (sizeof(char));
	printf("%d\n",*ptr_int);
	printf("%d\n",*ptr_float);
	printf("%d\n",*ptr_char);
	free(ptr_int);
	free(ptr_float);
	free(ptr_char);
}	*/

//Write a program that allocates memory
//space as required by the user for three
//arrays. User enters the numbers for two
//arrays and the program sums the
//corresponding array elements and
//stores them in the third array.

void main(){
	int size,i;
	printf("Enter the size of arrays: ");
	scanf("%d",&size);
	int *arr = (int*) calloc(size,sizeof(int));
	int *arr2 = (int*) calloc(size,sizeof(int));
	int *arr3 = (int*) calloc(size,sizeof(int));
	printf("enter elements of first array: \n");
	for(i=0;i<size;i++){
		scanf("%d",(arr + i));
	}
	printf("enter elements of second array: \n");
	for(i=0;i<size;i++){
		scanf("%d",(arr2 + i));
	}
	printf("sum of corresponding elements of first and second array: \n");
	for(i=0;i<size;i++){
		*(arr3 +i) = *(arr + i) + *(arr2 + i);
		printf("%d ",*(arr3 + i));
	}
	free(arr);
	free(arr2);
	free(arr3);
}

