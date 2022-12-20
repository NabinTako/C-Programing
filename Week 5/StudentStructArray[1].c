//Create a structure named student that has a name, roll number and marks as members. Assume
//appropriate types and size of members. Use this structure to read and display records of 10
//students. Create two functions: One is to read information of students and other to display the
//information.

#include <stdio.h>

struct student{
	char name[50];
	int rollNum;
	int marks;
};
struct student* read();
void print();
int size=2;
void main() {
	int i;
	 struct student S[2];
	print(read(S));
}
struct student* read(struct student s[2]){
	int i;
  	for(i=0;i<2;i++){
  		printf("Name: ");scanf("%s",s[i].name);
  		printf("rollNum: ");scanf("%d",&s[i].rollNum);
  		printf("marks: ");scanf("%d",&s[i].marks);
	  }	
	  return s;
}

void print(struct student s1[2]){
	int i;	
	for(i=0;i<2;i++){
  		printf("Name: %s\n",s1[i].name);
  		printf("rollNum: %d\n",s1[i].rollNum);
  		printf("marks: %d\n",s1[i].marks);
	  }
	
};
