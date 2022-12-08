//Write a program in C to store n elements in an array and print the elements using
//pointer.

#include <stdio.h>
void main(){
	int n,i;
	printf("enter no of elements to be in array: ");scanf("%d",&n);
	int arr[n];
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++){
		printf("enter the element %d: ",i);scanf("%d",&arr[i]);
	}
	int *ptr=arr;
	for(i=0;i<size;i++){
		printf("The element of %d: %d\n",i,*(ptr+i));
	}
}
