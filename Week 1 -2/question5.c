//Write a void function named “equations” which solves simultaneous equations. Your
//program will take six parameters. E.g. function(double a, double b, double c, double d,
//double e, double f){}. By solving simultaneous equations, you are finding where the two
//lines cross each other, so your function should print an x and y coordinate.
//ax+by=c …...(i)
//dx+ey=f........(ii)
//a = number in front of x of equation one
//b = number in front of y of equation one
//c = constant of equation one
//d = number in front of x of equation two
//e = number in front of y of equation two
//f = constant of equation two


#include <stdio.h>
void equations();
void main(){
	double a,b,c,d,e,f;
	printf("Enter a constant of x1: ");
	scanf("%lf", &a);
	printf("Enter a constant of y1: ");
	scanf("%lf", &b);
	printf("Enter a constant of equation I: ");
	scanf("%lf", &c);
	printf("Enter a constant of x2: ");
	scanf("%lf", &d);
	printf("Enter a constant of y2: ");
	scanf("%lf", &e);
	printf("Enter a constant of equation II: ");
	scanf("%lf", &f);
	
	equations(a,b,c,d,e,f);
}
void equations(double a, double b,double c, double d,double e,double f){
	
	double x,y;
	y = (c*d - a*f)/(-a * e + b*d);
	x = (f - e*y)/d;
	printf("Coordinate of (x,y) =(%.2lf,%.2lf) \n",x,y);
}
