#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    long int phno;
    int sal;
}e1,e2,e3;

int main()
{
    
    printf("Enter the details of employee1:\n");
    printf("Enter id:");
    scanf("%d",&e1.id);
    printf("Enter name:");
    scanf("%s",e1.name);
    printf("Enter phno:");        
    scanf("%ld",&e1.phno);
    printf("Enter salary:");
    scanf("%d",&e1.sal);
    /*printf("Enter the details of employee2:\n");
    printf("Enter id:");
    scanf("%d",&e2.id);
    printf("Enter name:");
    gets(e2.name);
    printf("Enter phno:");        
    scanf("%ld",&e2.phno);
    printf("Enter salary:");
    scanf("%d",&e2.sal);
    printf("Enter the details of employee3:\n");
    printf("Enter id:");
    scanf("%d",&e3.id);
    printf("Enter name:");
    gets(e3.name);
    printf("Enter phno:");        
    scanf("%ld",&e3.phno);
    printf("Enter salary:");
    scanf("%d",&e3.sal);*/
    
}