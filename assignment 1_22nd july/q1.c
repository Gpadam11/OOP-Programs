#include<stdio.h> 
#include<string.h>
struct student 
{
    int roll; 
    double marks[5]; 
    char name[20];
};
int main()
{ 
    int i;
    struct student s1; 
    printf("enter the name of s1: \n"); 
    scanf("%s", s1.name); 
    printf("enter the roll no of s1: \n"); 
    scanf("%d",&s1.roll); 
    for(i=0;i<5;i++){
     printf("enter the marks for subject %d: \n",i+1); 
    scanf("%lf",&s1.marks[i]); 
    }
    printf("roll no is %d\n", s1.roll); 
    printf("Name is %s\n", s1.name); 
     for(i=0;i<5;i++){
     printf("marks for subject %d %lf\n", i+1, s1.marks[i]); }
    return 0;
}