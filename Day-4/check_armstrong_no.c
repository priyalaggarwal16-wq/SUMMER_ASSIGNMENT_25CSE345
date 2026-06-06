
#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, rem, digits=0;
    double result =0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum!=0)
    {
        originalNum/=10;
        digits++;
    }
    originalNum=num;
    while(originalNum!=0)
    {
        rem=originalNum%10;
        result+=pow(rem, digits);
        originalNum/=10;
     }
     if((int)result==num)
     {
        printf("%d is an Armstrong number.\n", num);
     }
     else
     {
        printf("%d is not an Armstrong number.\n", num);
     }
        return 0;
     }
     
    
