#include <stdio.h>


void main()

{

FILE *fptr;

char filename[]= "employee.txt";
char ch;
fptr = fopen(filename,"r");

if (fptr == NULL) {

printf("Error creating file %s\n", filename);

exit(-1);

}
else {

//printf("Success creating file %s\n",filename);
do{
	ch = fgetc(fptr);
	printf("%c",ch);
	}while(ch != EOF);
}
fclose(fptr);
}
