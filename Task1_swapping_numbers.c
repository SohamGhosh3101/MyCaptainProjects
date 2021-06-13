#include<stdio.h>  
 int main()    
{    
int a,b;      
printf("Initial value of a and b : \n");
scanf("%d %d",&a,&b);      

a=a+b;    
b=a-b; 
a=a-b; 

printf("\nAfter swap, values for a and b :\n a=%d b=%d",a,b);    
return 0;  
}  
