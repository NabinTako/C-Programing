//Write a void function which takes one integer (n) as a parameter. Your function should
//then print out all triangular numbers from 1 up to the nth term.


#include <stdio.h>

void trinumber();

void main(){
	
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	trinumber(num);
	
}

void trinumber(int x){
	int k =0,i=0;
	for( i =1;i<x+1;i++){
		k = k + i;
		printf("%d ",k);
	}
}
