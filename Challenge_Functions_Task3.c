#include <stdio.h>
int lcm(int a, int b);
 
int main()
{
    int n1, n2, result;
	
    printf(" Input first number: ");
    scanf("%d", &n1);
    printf(" Input second number: ");
    scanf("%d", &n2);

    if(n1>n2)
        result = lcm(n2,n1);
    else
        result = lcm(n1,n2);
    printf(" LCM of %d and %d = %d\n\n", n1, n2, result);
    return 0;
}

int lcm(int a, int b)
{
    static int m = 0;
    
    m += b;
    if((m % a == 0) && (m % b == 0))
    {
        return m;
    }
    else
    {
        lcm(a, b);
    }
}
