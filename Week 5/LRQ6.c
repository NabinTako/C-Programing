/* Create a structure named Employee having members name, salary and hours of
work per day. Now, write a program to dynamically create an �n� number of
structures of type Employee. Pass this array of structure to a function that prints
the highest salary of the employee. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    char name[50];
    char post[50];
    int salary;
};
struct Employee *Check(struct Employee *emp,int number);
int main()
{
    struct Employee emp[10];
    int number = 0,i;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the data of Employee number %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Post: ");
        scanf("%s", emp[i].post);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
    }
    for ( i = 0; i < 10; i++)
    {
        if (emp[i].salary > 10000)
        {
            number++;
        }
    }
    struct Employee *richEmp = calloc(number , sizeof(struct Employee));
    richEmp = Check(emp,number);
    printf("Employee with 10k above salary:\n");
    for ( i = 0; i < number; i++){
        printf("Name: %s\n", richEmp[i].name);
        printf("Post: %s\n", richEmp[i].post);
        printf("Salary: %d\n", richEmp[i].salary);
    }
    free(richEmp);
    return 0;
}

struct Employee *Check(struct Employee *emp,int number)
{
    struct Employee *richEmp = calloc(number , sizeof(struct Employee));
    int above10K=0,i;
    for ( i = 0; i < 10; i++)
    {
        if (emp[i].salary > 10000)
        {
            strcpy(richEmp[above10K].name, emp[i].name);
            strcpy(richEmp[above10K].post, emp[i].post);
            richEmp[above10K].salary = emp[i].salary;
            above10K++;
        }
    }
    //free(richEmp);
    return richEmp;
}
