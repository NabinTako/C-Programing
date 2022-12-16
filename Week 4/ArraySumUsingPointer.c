//Write a program in C to compute the sum of all elements in an array using pointer.
#include <stdio.h>
void main(){
	int n,i,sum=0;
	printf("enter no of elements to be in array: ");scanf("%d",&n);
	int arr[n];
//	int size = sizeof(arr)/sizeof(arr[0]);
	printf("enter the element: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int *ptr=arr;
	for(i=0;i<n;i++){
		sum = sum + *(ptr+i);
	}
	printf("Sum of elements: %d",sum);
}
