#include <stdio.h>

#include <stdlib.h>

void main()

{

FILE *fptr;

char filename[]= "file01.txt";

fptr = fopen(filename,"a+");

if (fptr == NULL) {

printf("Error creating file %s\n", filename);

exit(-1);

}
else {

printf("Success creating file %s\n",filename);
char x[100];
fgets(x,100,fptr);
printf ("%s \n\n",x);
fprintf(fptr,"hello from here again");
fgets(x,100,fptr);
printf ("%s \n",x);

}

fclose(fptr);
}
