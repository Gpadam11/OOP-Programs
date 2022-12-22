#include<stdio.h>
typedef struct
{
    int roll;
    char name[30];
    int marks[5];
    int tmarks;
    double percent;
} 
student;

void stuinfodisp(student *x)
{
    int i, tmarks=0;
    printf("Name: %s\n",(*x).name);
    printf("Roll: %d\n",(*x).roll);
    for(i=0;i<5;i++){
    printf("Marks in subject %d:%d\n",i+1, (*x).marks[i]); 
      tmarks=tmarks+(*x).marks[i];}
         printf("Total marks: %d\n", tmarks);
    
    (*x).percent=tmarks*0.2;
     printf("Percentage: %lf\n",(*x).percent);
     
}


int main()
{
    int n;
    printf("enter no of students ");
    scanf("%d",&n);
    student e[n]; 
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student-%d ",i+1);
        scanf("%s",e[i].name);
        printf("Enter roll of student-%d: ",i+1);
        scanf("%d",&e[i].roll);
        for (int j=0;j<5;j++)
        {
        printf("Enter marks of subject-%d: ",j+1);
        scanf("%d",&e[i].marks[j]);}
    
    }
    for(int i=0;i<n;i++)
    {
        printf("\nStudent-%d info:\n",i+1);
        stuinfodisp(&e[i]);
    }
    return 0;
}




