
#include <stdio.h>
int main()
{
    int n count=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(n!=0)

    {
        n=n/10;
        count++;
    }
    printf("number of digits in n is %d", count);
    return 0;

}