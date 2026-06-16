
#include <stdio.h>
int main()
{
    int a[10], n, sum=0, total, missing;
    printf("Enter value of n: ");
        scanf("%d", &n);
       printf("Enter %d numbers:\n", n - 1);
       for(int i=0; i<n-1; i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    total=n*(n+1)/2;
    missing=total-sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
