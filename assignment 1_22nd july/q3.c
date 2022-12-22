//prg 3
#include<stdio.h>
typedef struct
{
    int id;
    char name[30];
    int age;
    double basicsalary;
    double grosssalary;
} 
employee;

void empinfodisp(employee *x)
{
    printf("Name: %s\n",(*x).name);
    printf("ID: %d\n",(*x).id);
    printf("Age: %d\n",(*x).age); 
    printf("Basic Salary: %lf\n",(*x).basicsalary);
    (*x).grosssalary=(*x).basicsalary+((0.8)*((*x).basicsalary))+((0.1)*((*x).basicsalary));
    printf("Gross Salary: %lf\n",(*x).grosssalary);
}

int main()
{
    int n;
    printf("enter no of employees ");
    scanf("%d",&n);
    employee e[n]; 
    for(int i=0;i<n;i++)
    {
        printf("Enter name of employee-%d ",i+1);
        scanf("%s",e[i].name);
        printf("Enter ID of employee-%d: ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter age of employee-%d: ",i+1);
        scanf("%d",&e[i].age);
        printf("Enter basic salary of employee-%d: ",i+1);
        scanf("%lf",&e[i].basicsalary);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nEmployee-%d info:\n",i+1);
        empinfodisp(&e[i]);
    }
    return 0;
}