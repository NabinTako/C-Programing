/* Write a program in C to read integers from the user until the user says "no". After
reading the data write all the odd numbers to a file named odd.txt and all the
even numbers to file even.txt. */

#include <stdio.h>
void main(){
	int num;
	char ch;
	
	FILE * fptr = fopen("odd.txt","w");
	FILE * fptr1 = fopen("even.txt","w");
	
	if(fptr == NULL || fptr1 == NULL){
		printf("Cannot find the file.");
		
		exit(-1);
	}
	do{
		printf("Enter a number: ");
		scanf("%d",&num);
		if(num % 2 ==0){
		fprintf(fptr1,"%d ",num);
		}else{
			fprintf(fptr,"%d ",num);
		}
		printf("Want to continue?(y/n): ");
		scanf("%s",&ch);
//		printf("%c", ch);
		if(ch == 'N'){
			break;
		}
		
		}
		while(ch != 'n');
	fclose(fptr);
	fclose(fptr1);
}
