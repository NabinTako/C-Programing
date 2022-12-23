/* Write a program that asks the user for two inputs: lower limit and upper limit. Now
write a function named display that prints all the numbers between those limits.
NOTE: You are only allowed to pass one parameter to the function and lower limit
and upper limit variables should not be made global.in */

#include <stdio.h>
struct limit{
	int lwrLimit;
	int uprLimit;
};
void main(){
	struct limit s;
  	printf("lowerLimit: ");scanf("%d",&s.lwrLimit);
  	printf("uperLimit: ");scanf("%d",&s.uprLimit);
  	print(s);
	
}
void print(struct limit S){
	int i;
	for(i=S.lwrLimit+1;i<S.uprLimit;i++){
		printf("%d  ",i);
	}
}
