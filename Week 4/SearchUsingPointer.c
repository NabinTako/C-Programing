//Write a C program to search an element in array using pointers.
#include <stdio.h>
void main(){
	int i,sum=0,num;
	int arr[5]={1,2,3,5,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int *ptr=arr;
	printf("number to search: ");scanf("%d",&num);
	for(i=0;i<size;i++){
		if(*(ptr+i) == num){
			printf("number %d is in index %d in array",num,i);
		}
	}
	
}
