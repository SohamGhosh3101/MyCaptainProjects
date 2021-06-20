#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter the value of n\n");
    scanf("%d\n",&n);

    for(i=0;i<n;i++)
    {
        printf("0");
    
        for(j=0;j<=i*2;j++)
        {
            printf("%d", !(j%2));
        }
        printf("\n");
    }
    return 0;
}
