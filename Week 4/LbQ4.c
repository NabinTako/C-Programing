/* Create a structure name Student and inside that struct include two data members'
roll no and marks, inside that struct student definition create another struct named
student_info where you should include three data members' name, age, and date
of birth and print it out for 3 students. */

#include <stdio.h>
struct Student{
	int roll_no;
	int marks;
	struct student_info{
		char name[100];
		int age;
		char DOB[100];
	}stdInfo;
};
void main(){
	int i;
	struct Student std[3];
	for(i=0;i<3;i++){
		printf("name: ");scanf("%s",std[i].stdInfo.name);
		printf("Date Of birth: ");scanf("%s",std[i].stdInfo.DOB);
		printf("age: ");scanf("%d",&std[i].stdInfo.age);
		printf("roll number: ");scanf("%d",&std[i].roll_no);
		printf("marks: ");scanf("%d",&std[i].marks);
	}
	for(i=0;i<3;i++){	
	printf("name: %s\n",std[i].stdInfo.name);
	printf("age: %d\n",std[i].stdInfo.age);
	printf("roll number: %d\n",std[i].roll_no);
	printf("marks: %d\n",std[i].marks);
	printf("Date Of birth: %s\n",std[i].stdInfo.DOB);
	 }
	
}
