/*
Write a void function which finds and prints the midpoint coordinates of a line. The
function should take in four parameters (x1, y1, x2 and y2).
xmid=(x1+x2)/2, ymid=(y1+y2) /2 */

#include <stdio.h>

void findMidPoint();
int greatest();

void main(){
	int x,x1,y,y1;
	printf("enter value of x1: ");scanf("%d",&x);
	printf("enter value of x2: ");scanf("%d",&x1);
	printf("enter value of y1: ");scanf("%d",&y);
	printf("enter value of y2: ");scanf("%d",&y1);
	findMidPoint(x,x1,y,y1);
}
void findMidPoint(int x1,int x2,int y1,int y2){
	int xmid,ymid;
	
	xmid=(x1+x2)/2;
	ymid=(y1+y2) /2;
	printf("X mid point: %d \n",xmid);
	printf("Y mid point: %d \n",ymid);
//	printf("midpoint Coordinate: (%d,%d)",xmid,ymid);
	
	// question 2
	int num1=5,num2=6;
	int num3 = greatest(num1,num2);
	printf("%d is greatest anomg the given number.",num3);	
}



int greatest(int x, int y){
	if(x > y){
		return x;
	}else{
		return y;
	}
}

