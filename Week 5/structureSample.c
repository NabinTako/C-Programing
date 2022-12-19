//Create a structure to hold any complex number x+iy. Write a program that uses the structure to
//read two complex numbers and display a third complex number.
//
//2. Write a program that uses the above structure to input two complex numbers and pass them to
//function, which returns the sum of entered complex numbers in the main function and displays
//the sum.

#include <stdio.h>

   struct complex{
   	int x,y;
   };
   struct complex sum();
void main() {
	 struct complex c1,c2;
   printf("enter element of c1.x ");
   scanf("%d",&c1.x);
   printf("enter element of c2.y ");
   scanf("%d",&c1.y);
   printf("enter element of c2.x ");
   scanf("%d",&c2.x);
   printf("enter element of c2.y ");
   scanf("%d",&c2.y);
    struct complex c3 = sum(c1,c2);
   printf("value of x and y of complex num 3: %d and %d",c3.x,c3.y);
   
}
struct complex sum(struct complex c1,struct complex c2){
	 struct complex c3;
   c3.x = c1.x + c2.x;
   c3.y = c1.y+ c2.y;
   
   return c3;
	
}
