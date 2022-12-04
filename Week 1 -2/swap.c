#include <stdio.h>

void swap(int*,int*);
int main(){
	int num1,num2;
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	printf("num1= %d and num2 = %d before swap \n",num1,num2);
	swap(&num1,&num2);
	printf("num1= %d and num2 = %d after swap",num1,num2);
} 

void swap(int *a,int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

