
#include <stdio.h>
void main()
{
    int n;
    long long factorial =1;
    printf("enter value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        factorial *= i;
    }
    printf("factorial of n %d is %lld\n",n,factorial);
    
}