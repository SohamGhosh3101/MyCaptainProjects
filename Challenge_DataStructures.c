#include <stdio.h>
 
struct employee{
    char name[30];
    int Age;
    int PhoneNumber;
    int Salary;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name:");          gets(emp.name);
    printf("Age:");            scanf("%d",&emp.Age);
    printf("Phone Number:");        scanf("%d",&emp.PhoneNumber);
    printf("Salary:");        scanf("%d",&emp.Salary);

    
    printf("\nEntered detail is:");
    printf("Name:%s ",emp.name);
    printf("Age:%d ",emp.Age);
    printf("Phone Number:%d ",emp.PhoneNumber);
    printf("Salary:%d\n ",emp.Salary);
    return 0;
}
