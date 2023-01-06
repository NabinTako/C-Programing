#include <stdio.h>
void swap(); // declaring the function
void main(){
	int a=2,b=3; // declaring and defining 
//	swap(a,b); // calling ( sends a copy) // call by value doesnt affect original variable
	swap(&a,&b);// calling ( sends the address) // call by reference, affects original variable
	printf("\n after swap: a=%d b=%d",a,b);
	
}
/* call by value
void swap(int a,int b){
	int c =a;
	a=b;
	b=c;
	printf("inside function : a=%d b=%d",a,b); /// a=3,b=2
} */
void swap(int *p,int *c){ 
// pointer variable is a special variable that stores address of the given variable,
// syntax of pointer variable: 
// <dataType> *<pointer name>.
// dataType is the dataType of the given variable that the pointer is pointing towards. 
//	printf("%p",p); //p= 000000000062FE1C (address of a variable);
	int d = *p; 
	// *p >> *(000000000062FE1C)> searches and brings the value stored in the given address.
	*p = *c;
	*c = d;
	printf("a=%d b=%d",*p,*c); // a=3,b=2
}
