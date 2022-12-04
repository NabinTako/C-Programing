//Write a program to initialize an integer array with values {10,5,7,91,54,24}.
//Pass this array to a function. If element is found, print out its index number
//and if element is not found then display the message “Element Not found” in
//the function.
#include <stdio.h>
void main(){
	int arr[6] = {10,7,5,91,24};
	check(&arr);
}
void check(int *arr2){
	int i,j;
	int temp[6] = {10,7,5,91,54,24};
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(arr2[i] == temp[j]){
			printf("index of %d is %d \n",arr2[i],j);
			}
		}
		
	}
}
