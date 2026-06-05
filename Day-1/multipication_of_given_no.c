
#include <stdio.h>
int main() 
{
    int n, product=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("multiplication table of %d:\n",n);
    for (int i = 1; i <=10; i++) 
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
return 0;
}