// Write a program in C to take two numbers from the user and print the
//maximum between two numbers using a pointer.


#include <stdio.h>
void main(){
	int x,y;
	int *p,*p1;
	printf("enter a number: ");
	scanf("%d",&x);
	printf("enter another number: ");
	scanf("%d",&y);
	p = &x; 
	p1 = &y;
	if(*p > *p1){
		printf("%d is greater than %d",*p,*p1);
	}else{
		printf("%d is greater than %d",*p1,*p);
	}
}
