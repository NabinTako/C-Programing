#include<stdio.h>

void main(){
	FILE *even = fopen("even.txt","r");
	FILE *odd = fopen("odd.txt","r");
	FILE *newFile = fopen("numbers.txt","w");
	if(even == NULL || odd == NULL || newFile == NULL){
		printf("Cannot find the file.");
		
		exit(-1);
	}
	char Ech,Och;	
	Ech = fgetc(even);
	while(Ech != EOF){
		fprintf(newFile,"%c",Ech);
		Ech = fgetc(even);
	}
	fprintf(newFile,"\n");
	Och = fgetc(odd);
	while(Och != EOF){
		fprintf(newFile,"%c",Och);
		Och = fgetc(odd);
	}
	fclose(odd);
	fclose(even);
	fclose(newFile);
}
