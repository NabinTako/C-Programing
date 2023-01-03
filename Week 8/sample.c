#include <stdio.h>
void main()
 {
//FILE *fptr;

char filename[]= "emp.txt";

//fptr = fopen(filename,"r");
//	char ch;
//	if (fptr == NULL) {
//
//	printf("Error creating file %s\n", filename);
//
//	exit(-1);
//	}
//	char name;
//	do{
//		ch = fgetc(fptr);
//	printf("%c ",ch);
//	}while(ch != EOF);
//	fclose("emp.txt");
	FILE *ft = fopen(filename,"w");
	if (ft == NULL) {

	printf("Error creating file %s\n", filename);

	exit(-1);
	}
	char name[]="nab";
	fputs(ft,name);
	fclose(filename);
    
 }
