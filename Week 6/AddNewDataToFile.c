// WAP to add new employee details in newemployee.txt file.

#include <stdio.h>
struct employee{
	char empName[50];
	int age;
	int salary;
};
void main(){
	int size;
	printf("How many employee to add?: ");scanf("%d",&size);
	struct employee emp[size];
	int i;
	
	FILE *fptr;

	char filename[]= "newEmployee.txt";
	fptr = fopen(filename,"a");

	if (fptr == NULL) {

	printf("Error creating file %s\n", filename);

	exit(-1);
	}
	if(size ==0){
		printf("exitting");
	}else{
	for(i=0;i<size;i++){
		printf("name: ");scanf("%s",emp[i].empName);
		printf("age: ");scanf("%d",&emp[i].age);
		printf("salary: ");scanf("%d",&emp[i].salary);
	}
	for(i=0;i<size;i++){
		fprintf(fptr,"Name: %s\n",emp[i].empName);
		fprintf(fptr,"Age: %d\n",emp[i].age);
		fprintf(fptr,"Salary: %d\n",emp[i].salary);
	}
	}
	fclose(fptr);
}
