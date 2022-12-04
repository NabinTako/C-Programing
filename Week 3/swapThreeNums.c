//Write a program to take three numbers from the user and save it in three
//different variables. You must swap the value of three numbers using
//function. You must use call by references.

#include <stdio.h>

void main(){
	int num,num1,num2;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("enter a number: ");
	scanf("%d",&num1);
	printf("enter a number: ");
	scanf("%d",&num2);
	printf("num: %d num1: %d num2: %d \n",num,num1,num2);
	swap(&num,&num1,&num2);
	printf("num: %d num1: %d num2: %d",num,num1,num2);
}
swap(int *adNum,int *adNum1,int *adNum2){
	int temp = *adNum;
	*adNum = *adNum1;
	*adNum1 = *adNum2;
	*adNum2 = temp;
}
