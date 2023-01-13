/* Create a structure named employee having members: empName, age and
salary. Use this structure to read the name, age and salary of the 5 employees
and write entered information to a file employee.txt in D:\ drive. */

#include <stdio.h>
struct employee{
	char empName[50];
	int age;
	int salary;
};
void main(){
	struct employee emp[5];
	int i;
	
	FILE *fptr;

	char filename[]= "employee.txt.";
	fptr = fopen(filename,"w");

	if (fptr == NULL) {

	printf("Error creating file %s\n", filename);

	exit(-1);
	}
	fprintf(fptr,"Info on 5 employees\n");
	for(i=0;i<5;i++){
		printf("name: ");scanf("%s",emp[i].empName);
		printf("age: ");scanf("%d",&emp[i].age);
		printf("salary: ");scanf("%d",&emp[i].salary);
		fprintf(fptr,"Name: %s\n",emp[i].empName);
		fprintf(fptr,"Age: %d\n",emp[i].age);
		fprintf(fptr,"Salary: %d\n",emp[i].salary);
	}
	fclose(fptr);
}
