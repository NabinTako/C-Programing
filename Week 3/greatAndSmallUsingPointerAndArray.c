//Write a program to read three integers using an array and find the smallest
//and largest among them.You must write a function for finding the largest and
//smallest integer and the result must be displayed in the main function itself.
//You are not allowed to create global variables.

#include <stdio.h>
void main(){
	int arr[3];
	int i;
	for(i=0;i<3;i++){
	printf("Enter a number: ");
	scanf("%d",&arr[i]);
	}
	int *grtSml = check(&arr);
	printf(" Greatest : %d \n Smallest: %d",grtSml[0],grtSml[1]);
}

int check(int *arr2){
	int i;
	int greatest = arr2[0],smallest = arr2[0];
	for(i=0;i<3;i++){
		if(greatest <= arr2[i]){
			greatest = arr2[i];
		}
		if(smallest >= arr2[i]){
			smallest = arr2[i];
		}
	}
	int arr3[2] = {greatest,smallest};
	return &arr3;
}
