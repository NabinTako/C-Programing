#include <stdio.h>

int sum(int*);
int main(){
    int num[10],i,Sum=0;
    for(i=0;i<10;i++){
    	printf("enter number: ");
    	scanf("%d",&num[i]);
	}
	printf("sum: %d",sum(&num));
} 

int sum(int *num2){
	int i=0,Sum=0;
	for(i=0;i<10;i++){
		Sum = Sum + num2[i];
	}
	return Sum;
	
}
