
#include <stdio.h>
int main()
{
    int n, original, reverse=0, r;
    printf("enter a number:");
    scanf("%d", &n);
    original=n;
    while(n!=0)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    if(original==reverse)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}
    
    
    
