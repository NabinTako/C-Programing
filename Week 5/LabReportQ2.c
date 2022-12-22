/* WAP to input name, post and salary of ten employees from main () function and
pass to structure type user defined function (argument of this function should also
be a structure type). This function returns a structure variable which keeps the
record of only those employees whose salary is greater than 10,000. This modified
record is also displayed from the main () function.
*/

#include <stdio.h>
#include <string.h>

struct employee{
	char name[50];
	char post[50];
	int salary;
};
struct employee* save();
void print();
int size=2;
void main() { 
int i;
struct employee worker[size];
for(i=0;i<size;i++){
	printf("name: ");scanf("%s",worker[i].name);
	printf("post: ");scanf("%s",worker[i].post);
	printf("salary: ");scanf("%d",&worker[i].salary);
}
struct employee *rint = save(worker);
for(i=0;i<size;i++){
	printf("name: %s\n",rint[i].name);
	printf("post: %s\n",rint[i].post);
	printf("salary: %d",rint[i].salary);
}

}
struct employee* save(struct employee worker[size]){
	int i,Rsize=0;
	struct employee RWorker[size];
	for(i=0;i<size;i++){
	if(worker[i].salary >= 10000){
	    worker[i] = RWorker[Rsize];
	//	worker[i].name = RWorker[Rsize].name;
		//worker[i].post = RWorker[Rsize].post;
	//	worker[i].salary = RWorker[Rsize].salary;
		Rsize=Rsize+1;
	}
}
	//Size = sizeof(Worker)/sizeof(Worker[0]);
	//struct employee richWorker
	return RWorker;
}
