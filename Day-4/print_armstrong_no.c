
#include <stdio.h>
int main()
{
    int start, end, n, temp, digit, sum;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for(n=start; n<=end; n++)
    {
        temp=n;
        sum=0;
        while(temp>0)
        {
            digit=temp%10;
            sum=sum+(digit*digit*digit);
            temp=temp/10;
        }
        if(sum==n)
        {
            printf("%d ", n);
        }
     }
        return 0;
    }

