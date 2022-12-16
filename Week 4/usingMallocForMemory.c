#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//  int *ptr_int;
//  char *ptr_char;
//  float *ptr_float;
//  
//  ptr_int = (int*)malloc(1*sizeof(int));
//  ptr_char = (char*)malloc(1*sizeof(char)*1);
//  ptr_float = (float*)malloc(1*sizeof(float));
//  
//  printf("\nEnter an integer : ");
//  scanf("%d",ptr_int);
//  
//  printf("\nEnter a character : ");
//  scanf(" %c",ptr_char);
//  
//  printf("\nEnter a float : ");
//  scanf("%f",ptr_float);
//  
//  printf("\nThe value in integer pointer : %d",*ptr_int);
//  printf("\nThe value in char pointer : %c",*ptr_char);
//  printf("\nThe value in float pointer : %f",*ptr_float);
//
//  free(ptr_int);
//  free(ptr_char);
//  free(ptr_float);
//  
//  return 0;
//}	

//Write a program that allocates memory
//space as required by the user for three
//arrays. User enters the numbers for two
//arrays and the program sums the
//corresponding array elements and
//stores them in the third array.

//void main(){
//	int size,i;
//	printf("Enter the size of arrays: ");
//	scanf("%d",&size);
//	int *arr = (int*) calloc(size,sizeof(int));
//	int *arr2 = (int*) calloc(size,sizeof(int));
//	int *arr3 = (int*) calloc(size,sizeof(int));
//	printf("enter elements of first array: \n");
//	for(i=0;i<size;i++){
//		scanf("%d",(arr + i));
//	}
//	printf("enter elements of second array: \n");
//	for(i=0;i<size;i++){
//		scanf("%d",(arr2 + i));
//	}
//	printf("sum of corresponding elements of first and second array: \n");
//	for(i=0;i<size;i++){
//		*(arr3 +i) = *(arr + i) + *(arr2 + i);
//		printf("%d ",*(arr3 + i));
//	}
//	free(arr);
//	free(arr2);
//	free(arr3);
//}

