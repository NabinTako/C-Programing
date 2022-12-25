/* Write a program to copy content from employee.txt. File to newemployee.txt file. */

#include <stdio.h>
void main(){
	char ch;
	
	FILE * fptr = fopen("employee.txt","r");
	FILE * fptr1 = fopen("newEmployee.txt","w");
	
	if(fptr == NULL){
		printf("Cannot find the file.");
		
		exit(-1);
	}
	if(fptr1 == NULL){
		printf("Cannot find the file.");
		exit(-1);
	}
	do{
		ch = fgetc(fptr);
		fprintf(fptr1,"%c",ch);
	}while(ch != EOF);
	fclose(fptr);
	fclose(fptr1);
}
