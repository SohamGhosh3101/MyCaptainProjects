#include<stdio.h> 
 int sum(int,int); 
 int main() 
 { 
   int n,s=0; 
   printf("\nInput Number: "); 
   scanf("%d",&n);   
 printf("\n Sum of digits = %d",sum(n,s)); 
   return 0;    
 } 
int sum(int n,int s) 
 { 
   int i,k; 
   k=n%10; 
   i=n/10; 
 s=s+k; 
   if(i!=0) 
   sum(i,s); 
   else  
   return s; 
 } 
