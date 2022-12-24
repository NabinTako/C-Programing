#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    char name[50];
    char post[50];
    int salary;
};
struct Employee *Check(struct Employee *emp);
int main()
{
    struct Employee emp[10];
    struct Employee *richEmp = calloc(10 , sizeof(struct Employee));
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
    richEmp = Check(emp);
    printf("Employee with 10k above salary:\n");
    for ( i = 0; i < number; i++){
        printf("Name: %s\n", richEmp[i].name);
        printf("Post: %s\n", richEmp[i].post);
        printf("Salary: %d\n", richEmp[i].salary);
    }
    free(richEmp);
    return 0;
}

struct Employee *Check(struct Employee *emp)
{
    struct Employee *richEmp = calloc(10 , sizeof(struct Employee));
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
