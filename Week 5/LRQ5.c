/* Write a structure to store the names, salary and hours of work per day of 5
employees in a company. Write a program to increase the salary depending on the
number of hours of work per day as follows and then print the name of all the
employees along with their final salaries.
Hours of work per day 8 	10 		>=12
Increase in salary 	  $50 	$100 	$150
 */

#include <Stdio.h>
struct worker{
	char name[50];
	int salary;
	int hrsOfWork;
	};

int size =5;
int i;
void increseSalary();
void main(){
	struct worker Worker[size];
	for(i=0;i<5;i++){
		printf("Name: ");
		scanf("%s",&Worker[i].name);
		printf("Salary: ");
		scanf("%d",&Worker[i].salary);
		printf("Hrs Of Work: ");
		scanf("%d",&Worker[i].hrsOfWork);
	}
	increseSalary(Worker);
}
void increseSalary(struct worker Worker[size]){
	for(i=0;i<5;i++){
		if(Worker[i].hrsOfWork < 8){
		
		}else if(Worker[i].hrsOfWork > 8 && Worker[i].hrsOfWork < 11){
			Worker[i].salary = Worker[i].salary + 50;
		}else if(Worker[i].hrsOfWork > 10 && Worker[i].hrsOfWork <12){
			Worker[i].salary = Worker[i].salary + 100;
		}else{
			Worker[i].salary = Worker[i].salary + 150;
		}
	}
	printf("new informations: \n");
	for(i=0;i<5;i++){
		printf("Name: %s\n",Worker[i].name);
		printf("Salary: %d\n",Worker[i].salary);
		printf("Hrs Of Work: %d\n",Worker[i].hrsOfWork);
	}
	
}
