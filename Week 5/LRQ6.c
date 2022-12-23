/* Create a structure named Employee having members name, salary and hours of
work per day. Now, write a program to dynamically create an ‘n’ number of
structures of type Employee. Pass this array of structure to a function that prints
the highest salary of the employee. */

#include <Stdio.h>
#include <stdlib.h>
struct Employee{
	char name[50];
	int salary;
	int hrsOfWork;
	};

int size;
int i;
void print();
void main(){
	printf("No of workers you want to create: ");scanf("%d",&size);
	struct Employee* Worker = (struct Employee*) calloc(size,sizeof(struct Employee));
	for(i=0;i<size;i++){
		printf("Name: ");
		scanf("%s",&Worker[i].name);
		printf("Salary: ");
		scanf("%d",&Worker[i].salary);
		printf("Hrs Of Work: ");
		scanf("%d",&Worker[i].hrsOfWork);
	}
	print(Worker);
/*	for(i=0;i<size;i++){
		printf("Name: %s\n",Worker[i].name);
		printf("Salary: %d\n",Worker[i].salary);
		printf("Hrs Of Work: %d\n",Worker[i].hrsOfWork);
	}*/
}
void print(struct Employee Worker[size]){
	int greatest = Worker[0].salary;
	for(i=0;i<size;i++){
		if(greatest < Worker[i].salary){
			greatest = Worker[i].salary;
		}
	}
	printf("\n\nHighest salary:\n");
	for(i=0;i<size;i++){
		if(Worker[i].salary == greatest){
		printf("Salary: %d\n",Worker[i].salary);
		}
	}
}
