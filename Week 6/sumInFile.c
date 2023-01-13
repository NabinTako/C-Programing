// Write a c program to read integers from the user and append the sum to the end in the file
// name sum.txt.
#include <stdio.h>

void main(){
	FILE *sum = fopen("sum.txt","a");
	int numSum,n,userNum,i;
	if(sum == NULL){
		printf("File not Found!");
		exit(-1);
	}else{
		printf("How many numbers to add?: ");scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("Enter the numbers: ");
			scanf("%d",&userNum);
			numSum +=userNum;
		}
		fprintf(sum,"%d\n",numSum);
		fclose(sum);
	}
}
