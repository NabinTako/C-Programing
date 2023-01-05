#include<stdio.h>
#include<stdlib.h>
int main(){
	int c;
	int sum=0;
	int i=0;
	printf("enter the size of array");
	scanf("%d",&c);
	int *arr=calloc(c,sizeof(int));
	for(i=0;i<c;i++){
		sum=sum+arr[i];
	}	
	printf("the sum is %d",sum);
}



